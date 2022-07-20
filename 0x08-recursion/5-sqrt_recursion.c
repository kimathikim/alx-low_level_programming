#include "main.h"
/**
 * _sqrt - func
 * @x: number
 * @y: number
 *
 * Return: sum of the values
 */
int _sqrt(int x, int y)
{
	int sum;

	sum = x - y;
	if (sum < 0)
	{
		return (-(y / 2) - 1);
	}
	if (sum == 0)
	{
		return (1);
	}
	else
	{
		return (1 + _sqrt(sum, y + 2));
	}
}
/**
 * _sqrt_recursion - Squareroot of natural number
 *
 * @n: parameter
 *
 * Return: result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_sqrt(n, 1));
}
