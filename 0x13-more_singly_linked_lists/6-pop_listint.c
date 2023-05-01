#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *sap;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	sap = *head;
	*head = sap->next;
	n = sap->n;
	free(sap);
	return (n);
}
