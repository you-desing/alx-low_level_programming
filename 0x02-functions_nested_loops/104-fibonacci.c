#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
*/
int main(void)
{
int n = 0;
unsigned long s, F0 = 0, F1 = 1;

	while (n < 99)
	{
	s = F0 + F1;
	printf("%lu\n", s);
	if (n != 98)
		printf(", ");
	else
		printf("\n");
	F0 = F1;
	F1 = s;
	n++;
	}
	return (0);
}
