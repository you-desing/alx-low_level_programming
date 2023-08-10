#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat -  that concatenates two strings.
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * @n: size input
 *
 * Return: return pointer or NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ch;
	unsigned int len, i;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	len = strlen(s1) + strlen(s2);
	ch = (char *)malloc((len + 1) * sizeof(char));
	if (len != 0)
	{
	for (i = 0; i < strlen(s1); i++)
	{
		ch[i] = s1[i];
	}
	if (n > strlen(s2))
	{
		for (i = 0; i < strlen(s2); i++)
		{
		ch[i + strlen(s1)] = s2[i];
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
		ch[i + strlen(s1)] = s2[i];
		}
	}
	ch[len] = '\0';
	return (ch);
	}
	else
		return (NULL);
}
