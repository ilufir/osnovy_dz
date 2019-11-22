#include <stdio.h>
#include <math.h>

int main()
{
    int a,a1,a2,a3,res;
    scanf("%d%d",&a,&res);
    a1=a/100;
    a2=a/10%10;
    a3=a%10;
    if ((a1*a2*a3)>res == 0){
        (printf("> a"));
    }
    else{
        (printf("< a"));
    }
    return 0;
}
