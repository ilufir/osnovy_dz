#include <stdio.h>
#include <stdlib.h>
#include <mem.h>


int main()
{
    int n;
    scanf("%d",&n);
    int *arr = malloc (sizeof (int) * n);
    memset (arr, 0, sizeof (int) * n);
    for (int i = 0;i < n;i++){
       scanf("%d",&arr[i]);
    }
    int l,k;
    scanf("%d%d",&l,&k);
    int res = 0;
    for (int i2 = l-1;i2 <= k-1;i2++){
        res += arr[i2];
    }
    printf("%d",res);
    return 0;
}
