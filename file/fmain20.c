#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *a;
     a = fopen ("test.txt", "r");

  int i1 = 0;
  int i2 = 0;
  int i3 = 0;
  int n = 0;
  fscanf (a, "%d%d%d", &i1,&i2,&i3);
  while (!feof (a))
    {

        if ((i2 < i1 && i2 < i3) || (i2 > i1 && i2 > i3)){

            n++;
        }
       i1 = i2;
       i2 = i3;
      fscanf (a, "%d", &i3);
    }
    printf("%d ",n);
  fclose (a);
    return 0;
}
