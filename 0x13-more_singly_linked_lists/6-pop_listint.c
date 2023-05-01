#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node
 * @head: a double pointer
 *
 *Return: empty
 */
int pop_listint(listint_t **head)
{
	listint_t *sap;
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		i = ((*head)->i);
		sap = *head;
		*head = ((*head)->next);
		free(sap);
	}
	return (i);
}
