#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float s;
    scanf("%f%d",&s,&n);
    for (int i = 1;i<=n*12;i++){
        s*=1.06;
    }
    printf("CYMMA = %f",s);
    return 0;
}
