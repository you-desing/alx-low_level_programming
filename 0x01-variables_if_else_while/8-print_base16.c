#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : A C program for hexadicimal
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char c;
	for (c = 0; c <= 9; c++)
	{
	putchar('0' + c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
