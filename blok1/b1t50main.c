#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int N,k;
    scanf("%d%d",&N,&k);
    int res = 0;
    if (N<10){
        res = k*100+N*10+k;
    }
    if (N<100){
        res = k*1000+N*10+k;
    }
    printf("%d",res);
    return 0;
}
