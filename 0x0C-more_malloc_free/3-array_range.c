#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers.
 * @min: the value min
 * @max: the value max
 *
 * Return: pointer or NULL
*/
int *array_range(int min, int max)
{
	int *ar;
	int i;
	int j = 0;
	int n;

	n = max - min + 1;
	ar = (int *)malloc(n * sizeof(int));
	if (ar != NULL)
	{
	if (min <= max)
	{
		for (i = min; i <= max; i++)
		{
			ar[j] = i;
			j++;
		}
	return (ar);
	}
	else
		return (NULL);
	}
	else
		return (NULL);
}
