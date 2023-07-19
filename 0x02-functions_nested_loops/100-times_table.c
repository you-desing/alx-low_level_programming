#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: input the function
 *
*/

void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
	{
	printf(" ");
	}
	else
	{
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
		if (j != 0)
			printf(",");
		printf("%4d", i * j);
		}
	printf("\n");
	}
	}
}
