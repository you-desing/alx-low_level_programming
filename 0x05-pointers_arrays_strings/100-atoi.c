#include "main.h"
#include <string.h>
/**
 * _atoi - function that convert a string to an integer
 *
 * @s: input the function
 *
*/

int _atoi(char *s)
{
int sign = 1, number = 0, index = 0;

while (s[index] != '\0')
	{
	if (s[index] == '-')
	{
		sign *= -1;
	}
	else if (s[index] >= '0' && s[index] <= '9')
	{
		number = number * 10 + s[index] - '0';
	}
	else if (number > 0)
		break;
	index++;
	}
	number = number * sign;
return (number);
}
