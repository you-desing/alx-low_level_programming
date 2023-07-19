#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
*/
int main(void)
{
int n = 0;
unsigned long s, F0 = 0, F1 = 1;

	while (n < 50)
	{
	s = F0 + F1;
	printf("%lu\n", s);
	F0 = F1;
	F1 = s;
	if (n == 49)
		printf("\n");
	else
		printf(", ");
	n++;
	}
	return (0);
}
