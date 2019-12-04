#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    char ch;
    scanf("%d",&n);
    scanf(" %c",&ch);
    if ((n > -2) && (n < 3)){
        if (n == 1){
                switch (ch){
            case 'N':
                printf("E");
                break;
            case 'E':
                printf("S");
                break;
            case 'S':
                printf("W");
                break;
            case 'W':
                printf("N");
                break;
            }
        }
        if (n == -1){
            if (n == 1){
                switch (ch){
            case 'N':
                printf("W");
                break;
            case 'W':
                printf("S");
                break;
            case 'S':
                printf("E");
                break;
            case 'E':
                printf("N");
                break;
            }
        }
    }
        if (n == 0){
            printf(ch);
        }
        if (n == 2){
                switch (ch){
            case 'N':
                printf("S");
                break;
            case 'E':
                printf("W");
                break;
            case 'S':
                printf("N");
                break;
            case 'W':
                printf("E");
                break;
            }
        }
    }
    else{
    printf("OWU6KA!\n");
    }
    return 0;
}
