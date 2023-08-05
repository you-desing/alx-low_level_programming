#include <stdio.h>
#include <stdlib.h>

/**
 * main - Solve me
 *
 * @argc: integer
 *
 * @argv: character
 *
 * Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 0)
	{
	printf("0\n");
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] < 48 && *argv[i] > 57)
		{
			printf("Error\n");
			return (1);
		}
		else
			sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	}
	return (0);
}
