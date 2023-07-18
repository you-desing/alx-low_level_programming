#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * _putchar - Write caracter
 *
 * Description :_putchar - writes the string
 *
 * Return: On success 1.
 *
*/

int main(void)
{
	char msg[] = "_putchar";
	int i = 0;

	for (i = 0; i <= 8; i++)
	{
	_putchar(msg[i]);
	}
	return (0);
}
