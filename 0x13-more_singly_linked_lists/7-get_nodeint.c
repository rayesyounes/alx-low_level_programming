#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @head: pointer of the first node
 * @index: index is the index of the node
 *
 * Return: pointer of Index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nodes_nb;

	for (nodes_nb = 0; nodes_nb < index; nodes_nb++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
