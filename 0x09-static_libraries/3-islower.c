#include "main.h"

/**
 * _islower- function to checks if lowercase character
 *
 * @c: is input function
 *
 * Return: returns 1 if 'c' is lowercase ,otherwise always 0 (Success)
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)

		return (1);
	else
		return (0);
}
