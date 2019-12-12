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
    if (arr[0] > arr[1]) {

            for (int i = 0;i < n;i+=2){
                if (arr[i] > arr[i+1]){

                }
                else{
                    res=arr[i+1];
                    break;
                }
            }
    }
    else{

            for (int i = 1;i < n;i+=2){
                if (arr[i] > arr[i+1]){

                }
                else{
                    res=arr[i+1];
                    break;
                }
            }

    }
       printf("%d",res);
    return 0;
}
