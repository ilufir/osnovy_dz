#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *a,*b,*c;
     a = fopen ("test.txt", "r");
     b = fopen ("pos.txt", "w");
     c = fopen ("neg.txt", "w");
  int i = 0;

  fscanf (a, "%d", &i);
  while (!feof (a))
    {
        if (i >= 0){
            fprintf(b,"%d ",i);

        }
        if (i < 0){

             fprintf(c,"%d ",i);
        }
      printf ("%d ", i);
      fscanf (a, "%d", &i);
    }
  fclose (a);
    return 0;
}
