#ifndef VSR_TESTS_H_INCLUDED
#define VSR_TESTS_H_INCLUDED

#define SET \
static bool bSet = 0; \
if (!bSet){ \
bSet = 1;
 
#define END }
#define END2 }}

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

#define VAL(j,n) \
double t = 1.0 * j/n;

#endif