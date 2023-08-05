#include "main.h"
#include <string.h>
/**
 * *_strstr - function that locates a substring
 *
 * @haystack: first input
 *
 * @needle: second input
 *
 * Return: pointer to the beginning of the located substring
 *
*/

char *_strstr(char *haystack, char *needle)
{
unsigned int j, i;
char *p;

	for (j = 0; haystack[j] != '\0'; j++)
	{
	for (i = 0; haystack[j] == needle[i]; i++)
	{
		if (haystack[j] != '\0')
		{
			p = &needle[i];
			return (p);

		}
	}
	}
	return ('\0');
}
