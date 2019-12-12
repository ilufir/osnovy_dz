#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

int main()
{
    int n;
    scanf("%d",&n);
    int *arr = malloc (sizeof (int) * n);
    memset (arr, 0, sizeof (int) * n);
    int res=0;
    for (int i = 0;i < n;i++){
       scanf("%d",&arr[i]);
    }
    for (int i = 0;i < n;i++){
       if (arr[i] == 0){
            for (int i2 = i+1;i < n;i2++){
                if (arr[i2] == 0){
                    break;
                }
                else{
                    res += arr[i2];
                }
            }
       }
    }
    printf("%d",res);
    return 0;
}
