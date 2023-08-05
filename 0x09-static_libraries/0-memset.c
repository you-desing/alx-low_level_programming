#include "main.h"
#include <string.h>
/**
 * *_memset - fills memory with a constant byte.
 *
 * @n: size of memory
 *
 * @b: the constant byte
 *
 * @s: the the memory area
 *
 * Return: return the memory area s
 *
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
	{
	s[i] = b;
	}
return (s);
}
