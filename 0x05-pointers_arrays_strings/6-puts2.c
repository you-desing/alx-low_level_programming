#include "main.h"
#include <string.h>
/**
 * puts2 - prints every other character of a string
 *
 * @str: input the function
 *
*/

void puts2(char *str)
{
int i;
	for (i = 0; i <= strlen(str) - 1; i++)
	{
	if (i % 2 == 0)
		printf("%c", str[i]);
	}
}
