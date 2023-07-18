#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 *
 * Example table
 * 0, 0, ..
 * 0, 1, ..
 *
*/

void times_table(void)
{
int i = 0, j;

	while (i <= 9)
	{
	j = 0;
	while (j <= 9)
		{
		if (i * j <= 9)
			_putchar(' ');
		else
			_putchar(((i * j) / 10) + '0');

		_putchar(((i * j) % 10) + '0');
		_putchar(',');
		_putchar(' ');
		j++;
		}
	_putchar('\n');
	i++;
	}
}
