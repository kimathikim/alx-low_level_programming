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
	if (n > 0)
	{
		n = n * factorial(n - 1);
		return (n);
	}
	else
		return (-1);
	return (0);
}
