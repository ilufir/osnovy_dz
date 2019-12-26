#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *a;
     a = fopen ("test.txt", "r");

  int is = 0;
  int i1 = 0;
  int i2 = 0;
  int i3 = 0;
  fscanf (a, "%d%d%d", &i1,&i2,&i3);
  while (!feof (a) && is == 0)
    {

        if (i2 < i1 && i2 < i3){
            printf("%d ",i2);
            is = 1;
        }
       i1 = i2;
       i2 = i3;
      fscanf (a, "%d%", &i3);
    }
  fclose (a);
    return 0;
}
