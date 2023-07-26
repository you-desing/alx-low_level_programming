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
	int i;

	for (i = 0; i < strlen(s1); i++)
	{
		if (s1[i] == s2[i])

			return (0);

		else if (s1[i] > s2[i])

			return (15);
		else if (s1[i] < s2[i])
			return (-15);
	}
}
