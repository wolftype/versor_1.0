#ifndef VSR_TESTS_H_INCLUDED
#define VSR_TESTS_H_INCLUDED

#include "vsr_draw.h"

#define VAL(j,n) \
double t = 1.0 * j/n;

#define SET \
static bool bSet = 0; \
if (!bSet){ \
bSet = 1;

#define SETGUI(x) \
static bool bSet = 0; \
if (!bSet){ \
    bSet = 1;\
    static Gui gui; \
    app.subgui[x] = &gui;
 
#define END }
#define END2 }}
#define END3 }}}

#define TOUCH(x) app.interface.touch(x);
#define DRAWANDTOUCH(x) TOUCH(x) DRAW(x)
#define DRAWANDTOUCH3(x,r,g,b) TOUCH(x) DRAW3(x,r,g,b)
#define DRAWANDTOUCH4(x,r,g,b,a) TOUCH(x) DRAW4(x,r,g,b,a)
#define DRAWPUSH(p,v) GL::push(); GL::translate(p.w()); DRAW(v); GL::pop();

#define IT1(n) \
for (int i = 0; i < n; ++i) {\
VAL(i,n)


#define IT2(m,n) \
    for (int i = 0; i < m; ++i) { \
        double u = 1.0 * i/m; \
        for (int j = 0; j < n; ++j) { \
        double v = 1.0 * j/n;

#define IT2i(m,n) \
    for (int i = 0; i <= m; ++i) { \
        double u = 1.0 * i/m; \
        for (int j = 0; j <= n; ++j) { \
        double v = 1.0 * j/n;

#define ITJ(i,n) \
for (int i = 0; i < n; ++i){

#define ITJi(i,n) \
for (int i = 0; i <= n; ++i){ \
VAL(i,n)

#define IT3(m,n,l) \
    for (int i = 0; i < m; ++i) { \
        double u = 1.0 * i/m; \
        for (int j = 0; j < n; ++j) { \
        double v = 1.0 * j/n; \
            for (int k = 0; k < l; ++k) { \
            double w = 1.0 * k/l;


#define IT3i(m,n,l) \
    for (int i = 0; i <= m; ++i) { \
        double u = 1.0  * i/m; \
        for (int j = 0; j <= n; ++j) { \
        double v = 1.0 * j/n; \
            for (int k = 0; k <= l; ++k) { \
            double w = 1.0 * k/l;
#endif