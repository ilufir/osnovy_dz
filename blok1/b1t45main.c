#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a;
    scanf("%d",&a);
    int sum = a/1000 + a/100%10 + a/10%10 + a%10;
    printf("S = %d",sum);
    return 0;
}
