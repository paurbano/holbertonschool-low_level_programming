#include<ctype.h>

int _isalpha(int c)
{
 if(c>=97 && c<=122) || (c>=48 && c<=57) || (c>=65 && c<=90) 
  return (1);
 else
  return (0);
}
