#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float ax,bx,cx,ay,by,cy;
    printf("INPUT DATA \nAxy:");
    scanf("%f%f",&ax,&ay);
    printf("Bxy:");
    scanf("%f%f",&bx,&by);
    printf("Cxy:");
    scanf("%f%f",&cx,&cy);
    float ab = sqrt( pow((bx-ax),2) + pow((by-ay),2) );
    float ac = sqrt( pow((bx-ax),2) + pow((by-ay),2) );
    float bc = sqrt( pow((bx-ax),2) + pow((by-ay),2) );
    float p = ab+ac+bc;
    float s = abs(0.5*( (ax-cx)*(by-cy)-(ay-cy)*(bx-cx) ));
    printf("P = %f\nS = %f",p,s);
    return 0;
}
