#include "main.h"
#include <string.h>
/**
 * *_strchr - locates a character in a string.
 *
 * @c: input character
 *
 * @s: string input
 *
 * Return: pointer to the first occurrence of the character c in the string s
 *		or NULL
 *
*/

char *_strchr(char *s, char c)
{
int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
		{
			return (s + j);
		}
	}
	return ('\0');
}
