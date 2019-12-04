#include <stdio.h>
#include <stdlib.h>

int main()
{
    int oc;
    scanf("%d",&oc);
    if ((oc > 0) && (oc < 6)){
        switch (oc){
        case 1:
            printf("n/lOXO\n");
            break;
        case 2:
            printf("HEYDOB.\n");
            break;
        case 3:
            printf("YDOB/lETB.\n");
            break;
        case 4:
            printf("XOPOWO\n");
            break;
        case 5:
            printf("OT/lU4HO\n");
            break;
        }
    }
    else{
    printf("OWU6KA!\n");
    }
    return 0;
}
