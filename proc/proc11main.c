#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

void MinMaxx(int *x, int *y){
    int t;
    if (*x > *y){
    t = *x;
    *x = *y;
    *y = t;
    }
}
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    MinMaxx(&a,&d);
    MinMaxx(&b,&c);
    MinMaxx(&a,&b);
    MinMaxx(&c,&d);
    printf("%d%d",a,d);


    return 0;
}
