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
    int maxv = 0;
    for (int i = 0;i < n;i++){
       if (arr[i] > maxv){
        maxv = arr[i];
       }
    }
    int dist = 0;
    for (int i = 0;i < n;i++){
       if (arr[i] == maxv){
        for (int i2 = i+1;i2 < n;i2++){
       if (arr[i2] == maxv){
             dist = i2-i;
        }
        }
       }
    }
     printf("%d\n",dist);
    return 0;
}
