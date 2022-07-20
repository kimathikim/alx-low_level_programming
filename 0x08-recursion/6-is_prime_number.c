#include "main.h"
/**
 * is_prime - prime
 * @x: parameter
 * @y: parameter
 * Return: 0 if not and 1 if is a prime num
 */
int is_prime(int x, int y)
{
	if ((x % y) == 0 && y < x)
		return (0);
	if (x == y)
		return (1);
	else
		return (is_prime(x, y + 1));
}
/**
 * is_prime_number - function
 * @n: parameter
 * Return: 0 if not and 1 if is a prime num
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
