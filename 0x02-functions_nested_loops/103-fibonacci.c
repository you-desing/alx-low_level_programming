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
float T;

	while (1)
	{
	s = F0 + F1;
	if (s > 4000000)
		break;
	if (s % 2 == 0)
		T = T + s;
	F0 = F1;
	F1 = s;
	n++;
	}
	printf("%0.f\n", T);
	return (0);
}
