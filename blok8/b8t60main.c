#include <stdio.h>
#include <stdlib.h>
#include <mem.h>
void FileToArray(int len, FILE *rf, int *arry){
    for (int i = 0; i < len; i++){
        fscanf(rf,"%d",&arry[i]);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    FILE *fa = fopen("in60.txt","r");
    FILE *fb = fopen("ou60.txt","w");
    int *arra = malloc(sizeof(int)*n);
    int *arrb = malloc(sizeof(int)*n);
    memset(arrb,0,sizeof(int)*n);
    FileToArray(n,fa,arra);
        for(int i = 0; i<n;i++){
            for(int i2=i;i2<n;i2++){
                arrb[i]+=arra[i2];
            }
            fprintf(fb,"%d ",arrb[i]);
        }
    fclose(fa);
    fclose(fb);
    return 0;
}
