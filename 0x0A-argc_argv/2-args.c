#include <stdio.h>

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

	for (i = 0; i < argc; i++)
		printf("%s[%d]\n", argv[i]);
	return (0);
}
