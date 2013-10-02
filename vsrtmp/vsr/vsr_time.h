//
//  vsr_time.h
//  Versor
//
//  Created by Pablo Colapinto on 11/29/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Versor_vsr_time_h
#define Versor_vsr_time_h


#include <time.h>
#include <sys/time.h>
#include <stdio.h>

#ifdef __MACH__
#include <mach/clock.h>
#include <mach/mach.h>
#endif


namespace vsr {

    struct Clock {

        static struct timespec * ts;
        
        static void now() {

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
            
            //return *ts;
        }

        #endif
        
        

    };
}