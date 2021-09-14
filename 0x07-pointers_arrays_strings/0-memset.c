#include "main.h"

/**
 * _memset -file memory with a  constant byte
 * @s: memory area ponted to by s
 * @b: the constant byet b
 * @n: the first n bytes
 *
 * Return: pointer to memory areas
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
