#include "lists.h"
/**
 * dlistint_len - number of elements in a linklist
 * @h: pointer to head node
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}

	return (n);
}
