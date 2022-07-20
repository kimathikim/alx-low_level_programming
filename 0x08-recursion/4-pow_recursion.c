#include "main.h"
/**
 * _pow_recursion - find the power of a number
 *
 * @x: parameter
 * @y: parameter
 *
 * Return: end of prog
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		x = x * _pow_recursion(x, y);
		return (x);
	}
	return (0);
}
