#include "main.h"
#include "_putchar.c"
/**
 * print_numbers - function that prints the numbers, from 0 to 9
*/
void print_numbers(void)
{
int c = 0;

	do {
	_putchar(c + 48);
	c++;
	} while (c >= 0 && c <= 9);
	_putchar('\n');
}
