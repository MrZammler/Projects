#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char *orig, *rev;
  int i,k=0;

  if (argc==1)
    {
      printf("Usage: %s 'string_to_reverse'\n", argv[0]);
      return 0;
    }

  orig = malloc (strlen(argv[1])+1);
  rev  = malloc (strlen(argv[1])+1);
  orig = argv[1];

  printf("Original string: [%s]\n", orig);

  i = strlen(orig);
  k = 0;
  while (i>0)
    rev[k++] = orig[--i];

  rev[k+1]='\0';

  printf("Reversed string: [%s]\n", rev);

  return 0;
}

