#include "lists.h"

/**
 * sum_dlistint - getting the sum of all n in nodes
 *
 * @head: the head of the list
 * Return: the sum of all n in nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curre;
	int som = 0;

	curre = head;
	while (curre)
	{
		som += curre->n;
		curre = curre->next;
	}
	return (som);
}
