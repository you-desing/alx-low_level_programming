#include "main.h"
#include <string.h>
/**
 * _puts - prints a string
 *
 * @str: input the function
 *
*/

void _puts(char *str)
{
int i;

	for(i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
