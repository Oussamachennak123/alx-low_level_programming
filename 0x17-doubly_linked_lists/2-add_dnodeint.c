#include "lists.h"
/**
 * add_dnodeint - adding a node at the beginning of list
 * @head: the head
 * @n: the data
 * Return: a pointer to the newly created node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);

	newnode->prev = NULL;
	newnode->n = n;
	newnode->next = NULL;

	if (!*head)
	{
		*head = newnode;
		return (newnode);
	}
	newnode->next = *head;

	(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
