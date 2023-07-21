#include "main.h"

/**
 * print_number - prints all natural numbers
 *
 * @n: input the function
 *
*/

void print_number(int n)
{

/* print '-' for negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}
