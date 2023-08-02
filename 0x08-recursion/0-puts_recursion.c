"include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: type int string
 * return: always 0
 */
void _put_recursion(char *s)
{
	int x = 0;

	if (s[x] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[x]);
	s++;
	_puts_recursion(s);
}
