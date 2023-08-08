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

	if (str == NULL)
		return (NULL);
	if (strlen(str) != 0)
	{
	ch = malloc(strlen(str) * sizeof(*ch));
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		ch[i] = str[i];
	return (ch);
	}
	else
		return (NULL);
}
