#include <stdio.h>

/**
 * main - Solve me
 *
 * @argc: integer
 *
 * @argv: character
 *
 * Return: Always 0 or 1.
*/
int main(int argc, char *argv[])
{
	int i;
	int mult = 1;

	if (argc == 0)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		mult = mult * atoi(argv[i]);
	}
	printf("%d", mult);
	}
	return (0);
}
