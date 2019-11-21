#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float h;
    int R = 6350;
    scanf("%f",&h);
    float res = sqrt((R+h)*(R+h)-R*R);
    printf("d = %f",res);
    return 0;
}
