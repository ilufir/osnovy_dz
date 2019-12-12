#include <stdio.h>
#include <stdlib.h>
#include <mem.h>

int Calc(a,b,op){
    if (op == 1){
    return (a-b);
    }
    if (op == 2){
    return (a*b);
    }
    if (op == 3){
    return (a/b);
    }
    return (a+b);
}
int main()
{
    int x,y,n1,n2,n3;
    scanf("%d%d%d%d%d",&x,&y,&n1,&n2,&n3);
    int res = Calc(x,y,n1);
    printf("%d\n",res);
    res = Calc(x,y,n2);
    printf("%d\n",res);
    res = Calc(x,y,n3);
    printf("%d\n",res);

    return 0;
}
