#include "stdio.h"

/**
 * _strncpy - copies a string from src to dest, up to n characters
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of characters to be copied.
 * return: dest
 */
char *_strncpy(char *dest, const char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
