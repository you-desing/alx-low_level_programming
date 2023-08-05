#include "main.h"

/**
 * _isdigit - function that checks for a digit
 *
 * @c: input the function
 *
 * Return: Returns 1 if c is a digit and 0 otherwise
 *
*/
int _isdigit(int c)
{

	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
