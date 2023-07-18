#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: The input of function
 *
 * Return: Returns 1 if n positif ,
 *	0 if n is null,-1 is less the zero
 *
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
