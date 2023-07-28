#include "main.h"

/**
 * print_number - Print the number by putchar
 *
 * @n: The input number
 *
*/
void print_number(int n)
{
int sing = -1;

	if (n < 0)
	{
		_putchar('-');
		n = n * sing;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
