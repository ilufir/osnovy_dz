#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

int main()
{
    int n;
    scanf("%d",&n);
    double *arr = malloc (sizeof (double) * n);
    memset (arr, 0, sizeof (double) * n);
    for (int i = 0;i < n;i++){
       scanf("%lf",&arr[i]);
    }
    float res = 1;
    for (int i = 0;i < n;i++){
        int temp = arr[i];
        float temp2 = arr[i]-(1.*temp);
        res *= temp2;
       printf("%f\n",temp2);
    }
    printf("%f\n",res);
    return 0;
}
