#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a;
    scanf("%d",&a);
    float p = 1.5*a;
    float S = sqrt(p*(p-a)*(p-a)*(p-a));
    printf("S = %f",S);
    return 0;
}
