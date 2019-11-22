#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if (((a==b)&&(a==c))||((a==c)&&(a==d))||((a==b)&&(a==d))){
        printf("1");
    }
    if (((b==c)&&(b==d))){
        printf("2");
    }
    /*
    Сравнивать остальные бесполезно, так как из четырех разных чисел первым из трех равных может быть только 1 и 2
    */
    return 0;
}
