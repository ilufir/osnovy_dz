#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    float gip = sqrt(pow(a,2)+pow(b,2));
    float s = (a*b)/2;
    printf("c = %f\nS = %f",gip,s);
    return 0;
}
