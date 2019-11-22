#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if ((a> (b+c)) || (b> (a+c)) || (c> (a+b)))
    {
        printf("3TO HE TPEYr.");
    }
    else{
        if (((pow(a,2)+pow(b,2)) == pow(c,2)) || ((pow(b,2)+pow(c,2)) == pow(a,2)) || ((pow(a,2)+pow(c,2)) == pow(b,2))){
            printf("nPRMOYr.");
        }
        else{
            if ((a>b) && (a>c)){
                if ((pow(c,2)+pow(b,2)) < pow(a,2)){
                    printf("OCTPOYr.");
                }
                if ((pow(c,2)+pow(b,2)) > pow(a,2)){
                    printf("TYnOYr.");
                }
            }

            if ((b>c) && (b>a)){
                if ((pow(a,2)+pow(c,2)) < pow(b,2)){
                    printf("OCTPOYr.");
                }
                if ((pow(a,2)+pow(c,2)) > pow(b,2)){
                    printf("TYnOYr.");
                }
            }

            if ((c>b) && (c>a)){
                if ((pow(a,2)+pow(b,2)) < pow(c,2)){
                    printf("OCTPOYr.");
                }
                if ((pow(a,2)+pow(b,2)) > pow(c,2)){
                    printf("TYnOYr.");
                }
            }
        }


        if ((a == b) && (a == c)){
            printf("PABHOCTPOHHUU");
        }
        else{
            if ((a == b) || (a == c)){
            printf("PABHO6EDPEHHblU");
            }
        }
    }
    return 0;
}
