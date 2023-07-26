#include "main.h"
#include <string.h>
/**
 * *_strncpy - copies a string
 *
 * @n: input the function
 *
 * @dest: first character
 *
 * @src: second character
 *
 * Return: pointer to the resulting string dest
 *
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < strlen(dest); i++)
	{
		if (i < n)
		{
		dest[i] = src[i];
		}
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
return (dest);
}
