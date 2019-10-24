#include "function_pointers.h"
/**
 * op_add - returns the sum of a and b
 * @a: int a
 * @b: int b
 * Description: returns the sum of a and b
 * Return: Integer
 */
int op_add(int a, int b)
{
return (a + b);
}
/**
 * op_sub - returns the difference of a and b
 * @a: int a
 * @b: int b
 * Description: returns the difference of a and b
 * Return: Integer
 */
int op_sub(int a, int b)
{
return (a - b);
}
/**
 * op_mul - returns the product of a and b
 * @a: int a
 * @b: int b
 * Description: returns the product of a and b
 * Return: Integer
 */
int op_mul(int a, int b)
{
return (a * b);
}
/**
 * op_div - returns the result of the division of a by b
 * @a: int a
 * @b: int b
 * Description: returns the result of the division of a by b
 * Return: Integer
 */
int op_div(int a, int b)
{
if (b == 0)
exit(100);
else
return (a / b);
}
/**
 * op_mod - returns the remainder of the division of a by b
 * @a: int a
 * @b: int b
 * Description: returns the remainder of the division of a by b
 * Return: Integer
 */
int op_mod(int a, int b)
{
if (b == 0)
exit(100);
else
return (a % b);
}
