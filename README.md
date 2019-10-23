Readme file for project 0x0F. C - Function pointers

0. What's my name - 0-print_name.c -function that prints a name.

1-array_iterator.c - function that executes a function given as a parameter on each element of an array. size is the size of the array. action is a pointer to the function you need to use.

2-int_index.c - function that searches for an integer.

3. A goal is not always meant to be reached, it often serves simply as something to aim at.
program that performs simple operations.

3-main.c - .

3-op_functions.c - contain the 5 following functions (not more):
op_add: returns the sum of a and b. Prototype: int op_add(int a, int b);
op_sub: returns the difference of a and b. Prototype: int op_sub(int a, int b);
op_mul: returns the product of a and b. Prototype: int op_mul(int a, int b);
op_div: returns the result of the division of a by b. Prototype: int op_div(int a, int b);
op_mod: returns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);
 
3-get_op_func.c - contain the function that selects the correct function to perform the operation asked by the user. Youre not allowed to declare any other function.
 
3-calc.h - contain all the function prototypes and data structures used by the program.
should contain your main function only.

You are not allowed to code any other function than main in this file
You are not allowed to directly call op_add, op_sub, op_mul, op_div or op_mod from the main function
You have to use atoi to convert arguments to int
You are not allowed to use any kind of loop
You are allowed to use a maximum of 3 if statements