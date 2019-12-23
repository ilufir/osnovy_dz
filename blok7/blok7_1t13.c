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
    for (int i2 = n-2+(n%2);i2 >= 0;i2-=2){
        printf("%d",arr[i2]);
    }

    return 0;
}
