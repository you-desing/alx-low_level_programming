#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers -  prints numbers
 *
 * @n: number of integers
 *
 * @separator: string to be printed between numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	int num;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
	num = va_arg(ptr, unsigned int);
	printf("%d", num);
	if (separator != NULL && i != n - 1)
		printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
