#include "main.h"
#include <string.h>
/**
 * sqrt_recursive - returns the natural square root of a number
 *
 * @n: input the function
 *
 * @guess: second input the function
 *
 * Return: square number
 *
*/

int sqrt_recursive(int n, int guess)
{
int new_guess = (guess + n / guess) / 2;

	if (n < 0)
		return (-1);
	if (new_guess == guess)
	{
		return (guess);
	}
	else
	{
		return (sqrt_recursive(n, new_guess));
	}
}

/**
 * _sqrt_recursion - calculate squarte root
 *
 * @n: input the function
 *
 * Return: square number
 *
*/
int _sqrt_recursion(int n)
{
	return (sqrt_recursive(n, 1));
}
