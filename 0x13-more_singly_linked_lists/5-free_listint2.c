#include "lists.h"
/**
 * free_listint2 - frees a list_t list.
 * @head: head of list
 * Description: free list.sets the head to NULL
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
listint_t *anterior = *head;

if (head == NULL)
return;

while ((*head) != NULL)
{
*head = (*head)->next;
free(anterior);
anterior = *head;
}

/*head = NULL;*/
}
