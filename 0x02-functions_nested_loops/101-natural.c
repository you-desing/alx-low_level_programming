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
int s = 0;

	while (n < 10)
	{
	if (n % 3 == 0 || n % 5 == 0)
		{
		s = s + n;
		}
	n++;
	}
	printf("%d \n", s);
	return (0);
}
