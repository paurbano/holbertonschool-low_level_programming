#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - launch the app
* @argv: char
* @argc: int
* Return: int
*/
int main(int argc, char *argv[])
{
int (*f)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}
if ((strcmp(argv[2], "/") == 0 || (strcmp(argv[2], "%") == 0)) &&
*argv[3] == '0')
{
printf("Error\n");
exit(100);
}
if (strcmp(argv[2], "+") &&
strcmp(argv[2], "-") &&
strcmp(argv[2], "/") &&
strcmp(argv[2], "*") &&
strcmp(argv[2], "%"))
{
printf("Error\n");
exit(99);
}
f = get_op_func(argv[2]);
printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
return (0);
}
