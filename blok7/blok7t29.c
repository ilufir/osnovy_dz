#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

int FindSequential(int *mas, int pos, int N){
        int podr = 1;
        for (int i2 = pos+1;i2 < N;i2++){
       if (mas[i2] == mas[pos]){
             podr++;
        }
        else{
                 return podr;
            }
        }
return podr;
}

int main()
{
    int n;
    scanf("%d",&n);
    int *arr = malloc (sizeof (int) * n);
    memset (arr, 0, sizeof (int) * n);
    for (int i = 0;i < n;i++){
       scanf("%d",&arr[i]);
    }
    int res = 1;
    for (int i = 0;i < n-1;i++){
       if (arr[i+1] == arr[i]){
            if (FindSequential(arr,i,n) > res){
                res = FindSequential(arr,i,n);

            }
             i += FindSequential(arr,i,n) - 1;
       }
    }
     printf("%d\n",res);
    return 0;
}
