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
    int res = 0;
    for (int i = 0;i < n;i++){
        if (arr[i]%2 != 0 ){
        res += 1;
       printf("%d\n",arr[i]);
        }
    }
    printf("%d\n",res);
    return 0;
}
