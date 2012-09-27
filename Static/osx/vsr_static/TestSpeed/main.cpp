//
//  main.cpp
//  TestSpeed
//
//  Created by Pablo Colapinto on 9/10/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
/*

    SPEED TEST -- to compare with same version in dynamically loaded vsr.
    
    This xcode project binds agains a static version
    
    Results:
*/

//#include "vsr_op.h"
#include "Pnt.h"


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

    //Dll dll = DLN(0,1,0);
//    cout << (Ori(1)^PT(0,1,0)) << endl; 
//    cout << (Ori(1)^PT(0,1,0)^Inf(1)) << endl; 
    
    int numit = 1000;
    int numop = 1000;

    int total = 0;
    int totalsec = 0;
    
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

      total += end.tv_nsec - beg.tv_nsec;
      totalsec += end.tv_sec - beg.tv_sec;
      
      
      }
      
      printf("AVG lapse nsec: %lu\n", total / numit);
      printf("AVG lapse sec: %lu\n", totalsec / numit);
     
      
        
    total = 0;

    totalsec = 0;
    
    for (int i = 0; i < numit; ++i){
      
      struct timespec beg, end;
      uTime(&beg);
      
      for (int j = 0; j < numop; ++j){
//        
//        Dll dll(1.,1.,1.,1.,1.,1.);
//        MVBase * m = &dll;
//        Mot mot = Gen::mot(*m);
//      

            Pnt a(1,1,1,1,1);
            Pnt b(2,2,2,2,2);
            MVBase * m1 = &a;
            MVBase * m2 = &b;
            
            (*m1) * (*m2);
      }
      

      uTime(&end);

      
      total += end.tv_nsec - beg.tv_nsec;
            totalsec += end.tv_sec - beg.tv_sec;

      
      }
      
      printf("AVG lapse nsec: %lu\n", total / numit);
      printf("AVG lapse sec: %lu\n", totalsec / numit);
  
  
  return 0;

}

