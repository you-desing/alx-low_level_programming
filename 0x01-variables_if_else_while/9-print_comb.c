#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : A C program for number
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int c = 0;
	while (c <= 9)
	{
	putchar('0' + c);
	if (c != 9)
	{
	putchar(',');
	putchar(' ');
	}
	c++;
	}
	putchar('\n');
	return (0);
}
