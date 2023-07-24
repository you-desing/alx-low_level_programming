#include "main.h"
#include <string.h>
/**
 * rev_string - function that reverses a string
 *
 * @s: input the function
 *
*/

void rev_string(char *s)
{
	int n = strlen(s);
	int i;
	char ch;

	for (i = 0; i < n / 2; i++)
	{
	ch = s[i];
	s[i] = s[n - i - 1];
	s[n - i - 1] = ch;
	}
}
