#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

int AddRight(int k, int d){
    return k*10+d;
}
int main()
{
    int n;
    scanf("%d",&n);
    int d1;
    scanf("%d",&d1);
    printf("%d\n",AddRight(n,d1));
    int d2;
    scanf("%d",&d2);
    printf("%d",AddRight(AddRight(n,d1),d2));


    return 0;
}
