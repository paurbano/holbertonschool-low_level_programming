#include "lists.h"
#include <stdio.h>
/**
 * add_node_end - adds a new node at the end
 * @head: head of list
 * @str: string
 * Description: adds a new node at the beginning of a list_t list.
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *node = NULL;
list_t *actual = *head;
unsigned int i;

node = malloc(sizeof(list_t));

if (node == NULL)
return (NULL);

for (i = 0 ; str[i] != '\0' ; i++)
;

node->len = i;
node->str = strdup(str);
node->next = NULL;

if ((*head) == NULL)
(*head) = node;
else
{
while (actual->next != NULL)
actual = actual->next;

actual->next = node;
}

return (*head);
}
