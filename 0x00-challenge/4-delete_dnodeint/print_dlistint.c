#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Starts to print a doubly linkedlist of integers
 * @h: Specifies a  pointer to the first element
 * Return: The number of element printed (Ends)
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
