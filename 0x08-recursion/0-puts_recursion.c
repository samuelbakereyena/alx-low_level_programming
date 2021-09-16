#include "main.h"

/**
 * A function that prints a string, followed by a new line
 * Always return 0;
 *
 */
void _puts_recursion(char *s);
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
