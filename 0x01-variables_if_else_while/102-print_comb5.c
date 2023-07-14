#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description : A C program combinaison ascii
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int k = 0, c;

while (k <= 99)
	{
	c = k;
	while (c <= 99)
	{
	if (k != c && k < c)
	{
	putchar('0' + k / 10);
	putchar('0' + k % 10);
	putchar(' ');
	putchar('0' + c / 10);
	putchar('0' + c % 10);
	if (c + k != 99 || c + k != 98)
	}
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
