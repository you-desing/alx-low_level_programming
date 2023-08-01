#include "main.h"
#include <string.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 *		of a square matrix of integers
 *
 * @size: input the function
 *
 * @a: input array
 *
*/

void print_diagsums(int *a, int size)
{
int i, j;
int s = 0;
int Sum = 0;

	for (i = 0; i < size; i++)
	{
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				s = s + *(a + i * size + j);
		}
	}
	}
	printf("%d", s);
	printf(", ");
	for (i = 0; i < size; i++)
	{
	{
		for (j = 0; j < size; j++)
		{
			if (j == size - i - 1)
				Sum = Sum + *(a + i * size + j);
		}
	}
	}
	printf("%d\n", Sum);
}
