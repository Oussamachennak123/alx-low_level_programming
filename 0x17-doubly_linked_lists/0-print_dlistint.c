#include "lists.h"
/**
 * print_dlistint - printing data from doubly linked list
 * @h: the head
 * Return: the size of the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curre = h;
	size_t size = 0;

	if (!curre)
		return (0);
	while (curre)
	{
		printf("%d\n", curre->n);
		curre = curre->next;
		size++;
	}
	return (size);
}
