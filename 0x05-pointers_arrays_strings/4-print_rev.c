#include "main.h"
#include <string.h>
/**
 * print_rev - print a string, in reverse
 *
 * @s: input the function
 *
*/

void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1; i >= 0; i--)
		printf("%c", s[i]);
	printf("\n");
}
