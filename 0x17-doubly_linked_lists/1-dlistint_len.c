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

	if (!curre)
		return (0);
	while (curre)
	{
		curre = curre->next;
		size++;
	}
	return (size);
}
