#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d",&a);

    if ((a%10 == 6) || (a/10 == 6) || (a/10%10 == 6)){
        printf("6 BXODUT");
    }
     else{
        printf("6 HE BXODUT");
    }
    return 0;
}
