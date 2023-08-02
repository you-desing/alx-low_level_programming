#include "main.h"
#include <string.h>
/**
 * _pow_recursion -  value of x raised to the power of y
 *
 * @x: first input the function
 *
 * @y: second input the function
 *
 * Return: returns the value of x raised to the power of y
 *
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
