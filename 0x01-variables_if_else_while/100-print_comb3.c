#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : A C program for number ascii
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int k = 0, c;
while (k <= 9)
	{
	c = 0;
	while (c <= 9)
	{
	if (k != c && k < c)
	{
	putchar('0' + k);
	putchar('0' + c);
	if (c + k != 17)
	{
	putchar(',');
	putchar(' ');
	}
	}
	c++;
	}
	k++;
	}
	putchar('\n');
	return (0);
}
