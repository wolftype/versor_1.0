#ifndef OSC_H_INC
#define OSC_H_INC

#include <string>
#include "ip/UdpSocket.h"
#include "osc/OscOutboundPacketStream.h"
#include "osc/OscPacketListener.h"
#include "osc/OscReceivedElements.h"
#include "osc/OscTypes.h"

//#include <oscpack/ip/UdpSocket.h>
//#include <oscpack/osc/OscOutboundPacketStream.h>
//#include <oscpack/osc/OscPacketListener.h>
//#include <oscpack/osc/OscReceivedElements.h>
//#include <oscpack/osc/OscTypes.h>

#include "Thread.h"

// Helper macro for getting received message values
#define getOSCMessage()\
	unsigned long argc = m.ArgumentCount();\
	std::string addr   = m.AddressPattern() ? m.AddressPattern() : "";\
	std::string tags   = m.TypeTags() ? m.TypeTags() : "";\
	osc::ReceivedMessageArgumentStream args = m.ArgumentStream();\
	osc::ReceivedMessage::const_iterator argi = m.ArgumentsBegin();

// Simplified names
typedef osc::ReceivedBundle		OSCBundle;
typedef osc::ReceivedMessage	OSCMsg;
typedef IpEndpointName			NetAddr;

class OSCRecv : public osc::OscPacketListener {
public:
	typedef void (* networkRecvCB)(const OSCMsg & m, const NetAddr & remote, osc::uint64 time, void * user);

	OSCRecv(unsigned int port, networkRecvCB cb, void * userData=0)
		: recvCB(cb), user(userData), mPort(port), mTime(1), mStarted(false)
	{}

	~OSCRecv(){
		if(mSocket){
			mSocket->AsynchronousBreak();
			mThread.wait();
		}
	}

	networkRecvCB recvCB;
	void * user;
	
	void start(){
		if(mStarted) return;
		mStarted = true;
		mThread.start(threadFunc, this);
	}
	
	unsigned int port(){ return mPort; }
	
protected:
	Thread mThread;
	unsigned int mPort;
	osc::uint64 mTime;
	UdpListeningReceiveSocket * mSocket;
	bool mStarted;
	
	static THREAD_FUNCTION(threadFunc){
		OSCRecv * oscRecv = (OSCRecv *)user;
		UdpListeningReceiveSocket listeningSocket(
			NetAddr( NetAddr::ANY_ADDRESS, oscRecv->port()), oscRecv);
		oscRecv->mSocket = &listeningSocket;
		listeningSocket.Run();
		return 0;
	}
	
	virtual void ProcessMessage(const OSCMsg & m, const NetAddr & remote){
		if(recvCB) recvCB(m, remote, mTime, user);
	}
	
	virtual void ProcessBundle(const OSCBundle & b, const NetAddr & remote){
		mTime = b.TimeTag();
		OscPacketListener::ProcessBundle(b, remote);
	}
};

#define IP_MTU_SIZE 1536

class OSCSendSocket{
public:
	OSCSendSocket(const char * hostName, int port, int maxPacketSizeBytes=4096)
		: mEndpointName(hostName, port),
		mSocket(mEndpointName)
	{
		mBuffer = new char[maxPacketSizeBytes];
		mStream = new osc::OutboundPacketStream(mBuffer, maxPacketSizeBytes);
		mStream->Clear();
	}
	
	~OSCSendSocket(){ delete[] mBuffer; delete mStream; }

	template <class T>
	osc::OutboundPacketStream & operator << (T data){ return (*mStream) << data; }
	
	/// Sends the current outbound packet and then clears it.
	void send(){
		mSocket.Send( mStream->Data(), mStream->Size() );
		mStream->Clear();
	}

/*
    p << osc::BeginBundleImmediate
        << osc::BeginMessage( "/test1" ) 
            << true << 23 << (float)3.1415 << "hello" << osc::EndMessage
        << osc::BeginMessage( "/test2" ) 
            << true << 24 << (float)10.8 << "world" << osc::EndMessage
        << osc::EndBundle;
*/

private:	
	char * mBuffer;
	IpEndpointName mEndpointName;
	osc::OutboundPacketStream * mStream;
	UdpTransmitSocket mSocket; 
};

	
	
#endif
	
