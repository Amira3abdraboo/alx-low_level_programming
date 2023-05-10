#include"main.h"
int truly_prime(int n, int i);
/**
 *is_prime_number - eturns 1 if the input integer is a prime number,
 *otherwise return 0.
 *@n: input integer
 *Return: 1 if prime number, 0 if otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (truly_prime(n, n - 1));
}
/**
 * truly_prime - calculates if a number is prime
 * @n: integer
 * @i: iterator
 * Return: 1 if prime number, 0 if otherwise.
 */
int truly_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (truly_prime(n, i - 1));
}
