#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int sum,pri;
    scanf("%d%d",&sum,&pri);
    int kol = sum/pri;
    int sdc = sum-(kol*pri);
    printf("%d TOBAPA\n%d CDA4A",kol,sdc);
    return 0;
}
