#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  char *str;
  int i=0,k=0;

  if (argc==1)
    {
      printf("Usage: %s 'string'\n", argv[0]);
      return 0;
    }

  str = malloc (strlen(argv[1])+1);

  /* strip input of non alphanum chars */
  /* this should allow to check for complex phrases */
  while (argv[1][i]!='\0')
    {
      if(isalpha(argv[1][i]))
	{
	  str[k++]=argv[1][i];
	}
      i++;
    }

  str[k]='\0';
  k = strlen(str) - 1;
  i=0;

  while (str[i]!='\0' && tolower(str[i++]) == tolower(str[k--]))
    { }

  if (k == -1)
    printf("Input string is a palindrome.\n");

  return 0;
}
