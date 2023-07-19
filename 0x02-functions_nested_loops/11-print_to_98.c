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

	if (n > 98)
		{
		i = n;
		while (i > 98)
		{
			printf("%d ,", i);
			i--;
			}
		}
	else if (n <= 98)
		{
		i = n;
		while (i < 98)
			{
			printf("%d ,", i);
			i++;
			}
		}
	printf("98\n");
}
