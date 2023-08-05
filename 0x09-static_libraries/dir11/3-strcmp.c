#include "main.h"
#include <string.h>
/**
 * _strcmp - compares two strings
 *
 * @s1: first character
 *
 * @s2: second character
 *
 * Return: return integer
 *
*/


int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			i = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
	s1++;
	s2++;
	}
return (i);
}
