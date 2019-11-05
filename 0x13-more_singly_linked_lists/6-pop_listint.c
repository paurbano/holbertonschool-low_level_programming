#include "lists.h"

/**
 * pop_listint - deletes the head node of a list.
 * @head: head of list
 * Description: deletes the head node of a
 * Return: head nodes data (n).
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int n;

if(head == NULL)
return (0);

temp = *head;
n = temp->n;
*head = temp->next;
free(temp);
return (n);
}
