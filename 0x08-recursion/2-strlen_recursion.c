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
int n = 1;

	if (*s)
	{
	return (n + _strlen_recursion(s + 1));
	}
}
