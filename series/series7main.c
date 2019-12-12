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
    int res = 0;
    for (int i = 0;i < n;i++){
        int temp = arr[i];
        res += temp;
       printf("%d\n",temp);
    }
    printf("%d\n",res);
    return 0;
}
