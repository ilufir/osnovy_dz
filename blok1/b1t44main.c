#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b;
    float ang;
    scanf("%d%d%f",&a,&b,&ang);
    /* S = 1/2(b^2-a^2)tan ang*/
    int a2 = pow(a,2);
    int b2 = pow(b,2);
    float tg = tan(ang);
    int s = ((a2-b2)*tg)/2;
    printf("S = %d\n",s);
    return 0;
}
