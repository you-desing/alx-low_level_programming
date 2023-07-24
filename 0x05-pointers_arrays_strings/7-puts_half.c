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
	for (i = 0; i < len; i++)
		;
	i++;
	for (i = i / 2; i < len; i++)
	{
		printf("%c", str[i]);
	}
printf("\n");
}
