#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string
 *
 * @str: input the function
 *
*/

void puts_half(char *str)
{
int i;
int len;

len = strlen(str);
	for (i = len / 2; i <= len - 1; i++)
	{
		printf("%c", str[i]);
	}
}
