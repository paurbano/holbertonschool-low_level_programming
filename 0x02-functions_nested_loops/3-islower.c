#include<ctype.h>

int _islower(int c)
{
 if(c>=97 && c<=122) || (c>=48 && c<=57)
  return (1);
 else
  return (0);
}
