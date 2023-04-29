#include "lists.h"
#include <stdlib.h>


/**
  * add_nodeint - add node at beginning of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  * Return: NULL if it failed
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));
	if (n_node != NULL)
	{
		n_node->n = n;
		n_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		n_node->next = *head;
	*head = n_node;
	return (n_node);
}
