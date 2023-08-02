#include "main.h"
#include <string.h>
/**
 * factorial - calculate the factorial of a given number
 *
 * @n: input the function
 *
 * Return: returns the factorial of a given number
 *
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
