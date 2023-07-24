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
	for (i = 0; i < strlen(str); i + = 2)
	{
		printf("%c", str[i]);
	}
}
