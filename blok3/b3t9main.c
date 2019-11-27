#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fact(float n)
{
    if (n == 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
    float x,s,e;
    scanf("%f%f",&x,&e);
    s = 0;
    float y = pow(x,2)/fact(2);
    int i = 4;
    while (y > e){
       y = pow(x,2)/fact(i);
       s += y;
       i += 2;
    }
    printf("%f",s);
    return 0;
}
