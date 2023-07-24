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
	for (i = len / 2 - 1; i < len; i++)
	{
		printf("%c", str[i]);
	}
printf("\n");
}
