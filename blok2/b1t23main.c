#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if ((pow(b,2) - 4*a*c) >= 0){
        printf("ECTb KOPHU");
    }
     else{
        printf("KOPHEU HET");
    }
    return 0;
}
