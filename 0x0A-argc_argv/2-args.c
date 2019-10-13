#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 * @argc : argc contains the number of arguments passed to the program
 * @argv : A vector is a one-dimensional array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0 ; i < argc ; i++)
printf("%s\n", argv[i]);

return (0);
}
