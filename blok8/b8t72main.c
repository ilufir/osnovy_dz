#include <stdio.h>
#include <stdlib.h>
#include <mem.h>
void FileToArray(int len, FILE *rf, int *arry){
    for (int i = 0; i < len; i++){
        fscanf(rf,"%d",&arry[i]);
    }
}
void ArrayToFile(int len, FILE *rf, int *arry){
    for (int i = 0; i < len; i++){
        fprintf(rf,"%d ",arry[i]);
    }
}

int main()
{
    int k,l,n;
    scanf("%d%d%d",&n,&k,&l);
    FILE *fa = fopen("in72.txt","r");
    FILE *fb = fopen("ou72.txt","w");
    int *arra = malloc(sizeof(int)*n);
    FileToArray(n,fa,arra);
        for(int i = k-1; i<l-(k/2);i++){
            int t = arra[i];
            arra[i] = arra[l-i+k-1];
            arra[l-i+k-1] = t;
        }
    ArrayToFile(n,fb,arra);
    fclose(fa);
    fclose(fb);
    return 0;
}
