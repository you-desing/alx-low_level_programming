#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : A C program for number with putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int c;
	for (c = 0; c <= 9; c++)
	{
	putchar('0' + c);
	}
	putchar('\n');
	return (0);
}
