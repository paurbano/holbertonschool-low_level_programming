#include "lists.h"
/**
 * insert_nodeint_at_index - sum of all the data (n)
 * @head: head of list
 * @idx: index of node
 * @n: integer
 * Description: sum of all the data (n) of a listint_t linked list.
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *node = NULL;
listint_t *actual = *head;
unsigned int cont = 0;

if (head == NULL)
return (NULL);

node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);

node->n = n;
node->next = NULL;
if (idx == 0)
{
node->next = *head;
*head = node;
return (*head);
}
while ((*head) != NULL)
{
if ((idx - 1) == cont)
{
node->next = (*head)->next;
(*head)->next = node;
(*head) = actual;
return (*head);
}
cont++;
*head = (*head)->next;
}
return (NULL);
}
