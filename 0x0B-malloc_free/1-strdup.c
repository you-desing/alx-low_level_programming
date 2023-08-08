#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - print a copy of the string
 *
 * @str: input character of the function
 *
 * Return: returns a pointer
 *
*/
char *_strdup(char *str)
{
	unsigned int i;
	char *ch;

	if (str != NULL)
	{
	ch = malloc((strlen(str) + 1) * sizeof(*ch));
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		ch[i] = str[i];
	return (ch);
	}
	else
		return (NULL);
}
