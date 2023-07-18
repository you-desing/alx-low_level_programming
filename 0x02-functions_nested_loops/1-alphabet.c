#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * print_alphabet - The function Print_alphabet(void) print the alphabet
 *
*/

void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
