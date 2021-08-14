#include <stdio.h>

void add(double,double,double *);

void main() {
    double a = 5.5,b = 15.39, c= 0;
    add (a,b,&c);
    printf("%f\n",c);
    c = 10 * c;
    printf("%f\n",c);
}

void add(double m,double n,double *q) {
    *q = m + n + 0.0065;
    return ;
}
