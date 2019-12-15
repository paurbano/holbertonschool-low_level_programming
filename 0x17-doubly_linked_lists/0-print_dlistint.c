#include "lists.h"
/**
 * print_dlistint - prints all the elements of a double list
 * @h: list
 * Description:  prints all the elements of a dlistint_t list.
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int numNodes;

	numNodes = 0;
	while (h != NULL)
	{
		printf("%d \n", h->n);
		numNodes++;
		h = h->next;
	}
	return (numNodes);
}
