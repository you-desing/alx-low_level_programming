#include "main.h"
#include <string.h>
/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: input the function
 *
 * Return: the lenght of a string
 *
*/

int _strlen_recursion(char *s)
{
int n;

	if (*s)
	{
		n = 1;
		return (n + _strlen_recursion(s + 1));
	}
	return (0);
}
