#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description :print_alphabet - writes alhphabet
 *
 * Return: On success 1
 *
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	_putchar(c);
}
