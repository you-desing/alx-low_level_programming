#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
*/
void more_numbers(void)
{
int c, num;
int i = 0;

while (i < 10)
{
	for (c = 0; c <= 14; c++)
	{
	num = c;
	if (c > 9)
	{
		_putchar(1 + 48);
		num = c % 10;
	}
	_putchar(num + 48);
	}
	_putchar('\n');
	i++;
	}
}
