#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: first input the function
 *
 * @b: second input the function
 *
*/

void swap_int(int *a, int *b)
{
int k;

	k = *a;
	*a = *b;
	*b = k;
}
