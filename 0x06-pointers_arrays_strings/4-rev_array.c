#include "main.h"
#include <string.h>
/**
 * reverse_array - reverses the content of an array
 *
 * @n: number of elements of the array
 *
 * @a: the array of integers
 *
*/

void reverse_array(int *a, int n)
{
int i, temp;

	for (i = n / 2; i >= 0; i--)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
