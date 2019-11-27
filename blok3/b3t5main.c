#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    float xc,yc,r;
    scanf("%d%f%f%f",&n,&xc,&yc,&r);
    float x,y;
    int res = 0;
    for (int i = 1;i<=n;i++){
        scanf("%f%f",&x,&y);
        float ras = sqrt( pow((x-xc),2)+pow((y-yc),2));
        //printf("%f",ras);
        if (ras < r){
            res++;
        }
    }
    printf("%d",res);
    return 0;
}
