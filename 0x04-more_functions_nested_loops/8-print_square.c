#include <main.h>

/**
 * print_square -prints of variable length
 * @size: dimensions of square
 */
void print_square(int size)
{
	int i, j;
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; j++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
