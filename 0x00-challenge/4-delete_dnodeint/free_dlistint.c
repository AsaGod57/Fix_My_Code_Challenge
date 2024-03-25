#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Starts to free a list
 * @head: Specifies a pointer to the first element
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
