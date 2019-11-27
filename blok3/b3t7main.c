#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x,s,e;
    scanf("%f%f",&x,&e);
    s = 0;
    float y = (2*x)/((x*x)+(4*4));
    int i = 4;
    float b = 5;
    while (y > e){
       y = (i*x)/((x*x)+(b*b));
       s += y;
       b += 1;
       i += 2;
    }
    printf("%f",s);
    return 0;
}
