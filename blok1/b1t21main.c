#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float v1,v2,t1,t2;

    scanf("%f%f%f%f",&v1,&v2,&t1,&t2);
    float vres = v1+v2;
    float tres = ((t1*v1)+(t2*v2))/vres;
    printf("V = %f\nT = %f",vres,tres);
    return 0;
}
