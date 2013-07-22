/* http://en.wikipedia.org/wiki/Bailey%E2%80%93Borwein%E2%80%93Plouffe_formula */

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
  int k, precision;
  double p16 = 1, pi = 0;

  precision = atoi(argv[1]);
  
  if (precision > 48) precision = 48;

  for(k=0; k<=precision; k++)
    {
      pi += 1.0/p16 * (4.0/(8*k + 1) - 2.0/(8*k + 4) - 1.0/(8*k + 5) - 1.0/(8*k+6));
      p16 *= 16;
    }
   
  printf ("%.*f\n", precision,pi);

  return 0;
}
