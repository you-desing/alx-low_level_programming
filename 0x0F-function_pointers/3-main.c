#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - check the code
 *
 * @argc: first argument
 *
 * @argv: second argument
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char *operator;
	int calc;

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	operator = argv[2];
	if (num2 == 0)
	{
	printf("Error\n");
	exit(100);
	}
	if (operator != NULL)
	{
	calc = (*get_op_func(operator))(num1, num2);
	printf("%d\n", calc);
	}
	else
	{
	printf("Error\n");
	exit(99);
	}
	return (0);
}
