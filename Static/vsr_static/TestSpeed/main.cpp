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

#include "vsr.h"

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

int numit = 100;
int numop = 1000;

for (int i = 0; i < numit; ++i){
  
  struct timespec beg, end;
  uTime(&beg);
  
  for (int j = 0; j < numop; ++j){
    
    Dll dll(1,1,1,1,1,1);
    Mot m = Gen::mot(dll);
  
  }
  

  uTime(&end);

  printf("s:  %lu\n", beg.tv_sec);
  printf("ns: %lu\n", beg.tv_nsec);
  printf("s:  %lu\n", end.tv_sec);
  printf("ns: %lu\n", end.tv_nsec);
  
  printf("lapse: %lu\n", end.tv_sec - beg.tv_sec);
  printf("lapse: %lu\n", end.tv_nsec - beg.tv_nsec);
  
  }
  
  return 0;

}

