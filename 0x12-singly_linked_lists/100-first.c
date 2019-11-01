#include <stdio.h>
/**
 * _start - execute before main
 * Description: execute before main
 * Return: Nothing
 */
void _start(void) __attribute__((constructor));
void _start(void) __attribute__((constructor))
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
