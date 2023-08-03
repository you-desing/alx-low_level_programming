#include "main.h"
#include <string.h>
/**
 * isPrime - function help to know if n is prime
 *
 * @n: input the function
 *
 * @i: second input the function
 *
 * Return: 1 if n is a prime number, otherwise 0
 *
*/
int isPrime(int n, int i)
{

	if (i >= n && n > 1)
		return (1);
	else if (n % i == 0 || n <= 1)
		return (0);
	else
		return (isPrime(n, i + 1));
}
/**
 * is_prime_number - helping function
 *
 * @n: input the function
 *
 * Return: prime number 1 no is 0
 *
*/
int is_prime_number(int n)
{
	return (isPrime(n, 2));
}
