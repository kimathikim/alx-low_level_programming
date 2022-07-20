#include "main.h"
/**
 * factorial - find factorial of numbers
 *
 * @n: parameter
 *
 * Return: End program
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}
	return (0);
}
