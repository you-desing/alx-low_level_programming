#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: input the function
 *
*/

void print_to_98(int n)
{
int i;

if (i < 89)
{
	for (i = n; n < 98; i++)
	{
	printf("%d ,", n);
	}
}
else
{
	for (i = 98; i > n; i--)
	{
	printf("%d ,", n);
	}
}
printf("98\n");
}
