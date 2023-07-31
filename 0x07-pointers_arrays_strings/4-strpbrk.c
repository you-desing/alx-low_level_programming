#include "main.h"
#include <string.h>
/**
 * *_strpbrk -  searches a string for any of a set of bytes.
 *
 * @accept: string containing the characters to match
 *
 * @s :string to be scanned
 *
 * Return: a pointer to the character in s
*/

char *_strpbrk(char *s, char *accept)
{
unsigned int j, i;
char *p;

	for (j = 0; s[j] != '\0'; j++)
	{
	for (i = 0; accept[i] != '\0'; i++)
	{
		if (s[j] == accept[i])
		{
			p = &s[j];
			return (p);
		}
	}
	}
	return (0);
}
