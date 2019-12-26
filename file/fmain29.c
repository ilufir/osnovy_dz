#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *a;
     a = fopen ("test.txt", "r");

  int i = 0;
  int n[50];
  for (i = 0; i < 50; i++){
    n[i] = 0;
  }
  i = 0;
  while (!feof (a) && i < 50)
    {
      fscanf (a, "%d", &n[i]);
      printf("%d ",n[i]);
      i++;
    }

  fclose (a);
   a = fopen ("test.txt", "w");
     i = 0;
   while (!feof (a) && i < 50)
    {
        if (n[i] != 0){
      fprintf (a, "%d ", n[i]);
        }
      i++;
    }
      fclose (a);
    return 0;
}
