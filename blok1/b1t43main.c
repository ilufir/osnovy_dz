#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d",&a);
    float s = sqrt(3)*pow(a,2)*0.25;
    float ro = (sqrt(3)*a)/3;
    float rv = (sqrt(3)*a)/6;
    printf("S = %f\nr Bnuc.Okp = %f\nr Onuc.Okp = %f",s,rv,ro);
    return 0;
}
