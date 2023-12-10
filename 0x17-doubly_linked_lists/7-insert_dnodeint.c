#include "lists.h"
/**
 * dlistint_len - computing the length of a double linked list
 * @h: the head
 * Return: the size of the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curre = h;
	size_t size = 0;

	while (curre != NULL)
	{
		curre = curre->next;
		size++;
	}

	return (size);
}

/**
 * insert_dnodeint_at_index - insert node at index
 *
 * @h: the head
 * @idx: index to insert at
 * @n: data n for the new node
 * Return: pointer the newly created node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *curre, *next;

	if (h == NULL || idx > dlistint_len(*h))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == dlistint_len(*h))
		return (add_dnodeint_end(h, n));

	curre = *h;
	while (idx > 1)
	{
		curre = curre->next;
		idx--;
	}

	next = curre->next;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = curre;
	newnode->next = next;
	curre->next = newnode;
	next->prev = newnode;

	return (newnode);
}
