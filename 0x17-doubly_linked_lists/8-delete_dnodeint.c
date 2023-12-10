#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 *
 * @head: the head of the list
 * @index: the index to delete the node at
 * Return: 1 if deleted, -1 if not
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curre = *head;

	if (!curre)
		return (-1);

	if (index == 0)
	{
		*head = curre->next;
		if (curre->next)
			curre->next->prev = NULL;
		free(curre);
		return (1);
	}

	while (index > 0 && curre)
	{
		curre = curre->next;
		index--;
	}

	if (!curre)
		return (-1);

	if (curre->prev)
		curre->prev->next = curre->next;

	if (curre->next)
		curre->next->prev = curre->prev;

	free(curre);
	return (1);
}
