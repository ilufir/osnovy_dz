#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d",&a);

    if (a%10 > a/10){
        printf("1 4uc. < 2");
    }
     else{
        if (a%10 < a/10){
        printf("1 4uc. > 2");
        }
        if (a%10 == a/10){
        printf("1 4uc. = 2");
        }
    }
    return 0;
}
