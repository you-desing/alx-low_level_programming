#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : A C program ASCII
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int k = 0, c, l;
while (k <= 9)
	{
	c = 0;
	while (c <= 9)
	{
	l = 2;
	while (l <= 9)
	{
	if (k != c && k < c && c != l && c < l)
	{
	putchar('0' + k);
	putchar('0' + c);
	putchar('0' + l);
	if (c + k  + l != 24)
	{
	putchar(',');
	putchar(' ');
	}
	}
	l++;
	}
	c++;
	}
	k++;
	}
	putchar('\n');
	return (0);
}
