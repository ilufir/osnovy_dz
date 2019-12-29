#include <stdio.h>
#include <stdlib.h>
#include <mem.h>
void FileToArray(int len, FILE *rf, int *arry){
    for (int i = 0; i < len; i++){
        fscanf(rf,"%d",&arry[i]);
    }
}
void ArrayToFile(int len, FILE *rf, int *arry){
    for (int i = len-1; i >= 0; i--){
        fprintf(rf,"%d ",arry[i]);
    }
}

void Insrt(int *arr, int n)
{
     int i,t2,t;
     for (int i=1; i<n; i++)
       if (arr[i] < arr[i-1])
       {
          t=arr[i];
          t2=i-1;
          while ((t2>=0) && (arr[t2]>t)) {
                arr[t2+1]=arr[t2--];
          }
          arr[t2+1]=t;
       }


}

int main()
{
    int n;
    scanf("%d",&n);
    FILE *fa = fopen("in89.txt","r");
    FILE *fb = fopen("ou89.txt","w");
    int *arra = malloc(sizeof(int)*n);
    FileToArray(n,fa,arra);
        Insrt(arra,n);
    ArrayToFile(n,fb,arra);
    fclose(fa);
    fclose(fb);
    return 0;
}
