#include "main.h"

/**
 * _put_recrusion - Print a string followed by a new line
 *@s: the string to print
 *
 * Return: Nothing.
 */
void _puts_recrusion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recrusion(s);
}
