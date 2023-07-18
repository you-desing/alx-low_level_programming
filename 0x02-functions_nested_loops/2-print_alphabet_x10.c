#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 */

void print_alphabet_x10(void)
{
	int i = 0, c;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		i++;
	}
	_putchar('\n');
}
