#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_node - adds a new node
 * @head: head of list
 * @str: string
 * Description: adds a new node at the beginning of a list_t list.
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
unsigned int i;
list_t *node = NULL;

node = malloc(sizeof(list_t));

if (node == NULL)
return (NULL);

for (i = 0 ; str[i] != '\0' ; i++)
;

node->len = i;
node->str = strdup(str);
node->next = *head;

(*head) = node;

return (node);
}
