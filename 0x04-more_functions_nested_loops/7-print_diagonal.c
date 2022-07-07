#include "main.h"
/**
 * print_diagonal - funtion
 *
 * @n: parameter
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int m = 0;
	int i = 0;

	if (n > 0)
	{
		while (m < n)
		{
			while (i < m)
			{
				_putchar(32);
				i++;
			}
			_putchar(92);
			_putchar(10);
			m++;
		}

	}
	else
		_putchar(10);
}
