//
//  main.cpp
//  TestSpeed
//
//  Created by Pablo Colapinto on 9/10/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
/*

    SPEED TEST -- to compare with same version in vsr_static.
    
    This xcode project binds agains a version of libvsr which dynamically
    loads function calls.
    
    
    Results:
*/

#include "vsr.h"
#include "GLVInterfaceImpl.h"

#include <time.h>
#include <sys/time.h>
#include <stdio.h>

#ifdef __MACH__
#include <mach/clock.h>
#include <mach/mach.h>
#endif


using namespace vsr;


void uTime(struct timespec *ts) {

#ifdef __MACH__ // OS X does not have clock_gettime, use clock_get_time
  clock_serv_t cclock;
  mach_timespec_t mts;
  host_get_clock_service(mach_host_self(), CALENDAR_CLOCK, &cclock);
  clock_get_time(cclock, &mts);
  mach_port_deallocate(mach_task_self(), cclock);
  ts->tv_sec = mts.tv_sec;
  ts->tv_nsec = mts.tv_nsec;
#else
  clock_gettime(CLOCK_REALTIME, ts);
#endif

}


int main(int argc, char **argv) {

        /* Bind CGA Framework */
	CongaTypes::BindAll();

    cout << Par() << endl; 
    
    int counter = 0;
    int numit = 1000;
    int numop = 10000;

    int total;
    
     total = 0;
    
    for (int i = 0; i < numit; ++i){
      
      struct timespec beg, end;
      uTime(&beg);
      
      for (int j = 0; j < numop; ++j){
        
//        Dll dll(1.,1.,1.,1.,1.,1.);
//        Mot m = Gen::mot(dll);

        Pnt a(1,1,1,1,1);
        Pnt b(2,2,2,2,2);
        a * b;
      
      }
      

      uTime(&end);
      
        if (end.tv_sec == beg.tv_sec){
        counter++;
        total += end.tv_nsec - beg.tv_nsec;
       
      }
      
      }
      
      printf("AVG lapse: %lu\n", total / counter);
      
      
  return 0;

}

