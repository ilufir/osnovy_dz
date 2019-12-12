#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

int fact(x){
    if (x == 0)
    return 1;
  else
    return (x*fact(x-1));
}
int main()
{
    int x,y,n1,n2,n3;
    scanf("%d%d%d%d%d",&x,&y,&n1,&n2,&n3);
    printf("%d\n",fact(x));
    printf("%d\n",fact(y));
    printf("%d\n",fact(n1));
    printf("%d\n",fact(n2));
    printf("%d\n",fact(n3));

    return 0;
}
