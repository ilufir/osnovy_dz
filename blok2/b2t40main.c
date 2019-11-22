#include <stdio.h>
#include <math.h>

int main()
{
    int a,a1,a2,a3;
    scanf("%d",&a);
    a1=a/100;
    a2=a/10%10;
    a3=a%10;
    if ((a1*a2*a3)%4 == 0){
        (printf("KPATHO 4"));
    }
    else{
        (printf("HE KPATHO 4"));
    }
    return 0;
}
