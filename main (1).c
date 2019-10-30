/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int n = 100;
  printf ("First hundred number");
  for (int i = 0; i < 100; i++)
    {
      printf ("%d\n", i);
    }
  printf ("printing numbers backwards\n");
  while (n >= 1)
    {
      printf ("%d\n", n);
      n--;
    }
  printf("print multiples of 5");
   for (int i = 0; i < 100; i++)
    {
      if(i%5==0)
        printf ("%d\n", i);
    }
  return 0;
}
