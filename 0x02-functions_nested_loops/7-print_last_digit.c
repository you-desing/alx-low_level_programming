#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: input the function
 *
 * Return: Returns the value of the last digit
 *
*/
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
		digit = (-1) * n % 10;

	else
		digit = n % 10;
	_putchar(digit);
	return (digit);
}
