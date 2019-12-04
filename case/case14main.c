#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    float a,rv,rp,s;
    scanf("%d",&n);
    switch (n){
    case 1:
        scanf("%f",&a);
        rv = (a*sqrt(3))/6;
        rp = rv*2;
        s = (pow(a,2)*sqrt(3))/4;
        printf("a = %f\nR Bnuc. = %f\nR Onuc. = %f\nS = %f",a,rv,rp,s);
        break;
    case 2:
        scanf("%f",&rv);
        a = (rv*6)/sqrt(3);
        rp = rv*2;
        s = (pow(a,2)*sqrt(3))/4;
        printf("a = %f\nR Bnuc. = %f\nR Onuc. = %f\nS = %f",a,rv,rp,s);
        break;
    case 3:
        scanf("%f",&rp);
        rv = rp/2;
        a = (rv*6)/sqrt(3);
        s = (pow(a,2)*sqrt(3))/4;
        printf("a = %f\nR Bnuc. = %f\nR Onuc. = %f\nS = %f",a,rv,rp,s);
        break;
    case 4:
        scanf("%f",&s);
        a = sqrt((s*4)/sqrt(3));
        rv = (a*sqrt(3))/6;
        rp = rv*2;
        printf("a = %f\nR Bnuc. = %f\nR Onuc. = %f\nS = %f",a,rv,rp,s);
        break;
    }

    return 0;
}
