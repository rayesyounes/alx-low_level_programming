#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserting a new node at agiven postion
 * @head: double pointer
 * @idx: index of the node
 * @n: new node value
 *
 * Return: the address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *sap = *head;
	unsigned int nodes_nb;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (idx == 0)
	{
		new->next = sap;
		*head = new;
		return (new);
	}

	for (nodes_nb = 0; nodes_nb < idx - 1; nodes_nb++)
	{
		if (sap == NULL || sap->next == NULL)
			return (NULL);
		sap = sap->next;
	}
	new->next = sap->next;
	sap->next = new;

	return (new);
}
