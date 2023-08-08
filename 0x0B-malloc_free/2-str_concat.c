#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: returns a new string or NULL
 *
*/
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *ch;
	unsigned int len;

	len = strlen(s1) + strlen(s2);
	if (strlen(s1) != 0 && strlen(s2) != 0)
	{
	ch = malloc((len + 1) * sizeof(*ch));
	if (ch == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		ch[i] = s1[i];
	for (j = i; j <= len; j++)
		ch[j] = s2[j - strlen(s1)];
	return (ch);
	}
	else
		return (NULL);
}
