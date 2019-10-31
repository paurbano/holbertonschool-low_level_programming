0x12. C - Singly linked lists
REadme file for project 0x12. C - Singly linked lists at holberton.

0-print_list.c - function that prints all the elements of a list_t list.
 compile : gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_list.c -o a.
 Execute : $./a

1-list_len.c - function that returns the number of elements in a linked list_t list.
 compile : gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-list_len.c -o b
 Execute : $./b

2-add_node.c - function that adds a new node at the beginning of a list_t list.
 compile : gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-add_node.c 0-print_list.c -o c
 execute : $./c

3-add_node_end.c - function that adds a new node at the end of a list_t list.
 compile : gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-add_node_end.c 0-print_list.c -o d
 execute : $./d.

4-free_list.c - function that frees a list_t list.
 compile : gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
 execute : $./e