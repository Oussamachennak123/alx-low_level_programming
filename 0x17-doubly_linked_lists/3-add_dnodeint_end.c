#include "lists.h"

/**
 * add_dnodeint_end - adding a node at the end of list
 * @head: the head
 * @n: the data
 * Return: a pointer to the newly created node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *curre;
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
	curre = *head;

	while (curre->next)
		curre = curre->next;

	curre->next = newnode;
	newnode->prev = curre;

	return (newnode);
}
