#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * returnCents - calculates the min number of coins needed to make change given
 * @n: target change value
 * Return: min num of coins
 */
int returnCents(int n)
{
	int coins = 0;

	while (n)
	{
		if (n >= 25)
			n -= 25;
		else if (n >= 10)
			n -= 10;
		else if (n >= 5)
			n -= 5;
		else if (n >= 2)
			n -= 2;
		else if (n >= 1)
			n -= 1;
		coins++;
	}
	return (coins);
}
