#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ed;
    float m;
    scanf("%d%f",&ed,&m);
    if ((ed > 0) && (ed < 6)){
        switch (ed){
        case 1:
            printf("%f kg.",m);
            break;
        case 2:
            printf("%f kg.",m/1000.0);
            break;
        case 3:
            printf("%f kg.",m/100.0);
            break;
        case 4:
            printf("%f kg.",m*1000.0);
            break;
        case 5:
            printf("%f kg.",m*100.0);
            break;
        }
    }
    else{
    printf("OWU6KA!\n");
    }
    return 0;
}
