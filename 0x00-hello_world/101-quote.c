#include<unistd.h>

/**
 * main - Entry print
 *
 * Description : A C program with fonrtion
 *   ssize_t  write(int fd, const void *buf, sizeof(count));
 *
 * Return: 1 (Error)
*/

int main(void)
{	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(1, quote, 59);
	return (1);
}
