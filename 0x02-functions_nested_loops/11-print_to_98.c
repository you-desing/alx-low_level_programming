#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: input the function
 *
*/

void print_to_98(int n)
{
if (n < 89)
{
	while (n < 98)
	{
	printf("%d ,", n);
	n++;
	}
}
else
{
	while (n > 98)
	{
	printf("%d ,", n);
	n--;
	}
}
printf("98\n");
}
