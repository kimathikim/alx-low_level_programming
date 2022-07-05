#include "main.h"
/**
 * print_last_digit - print the last digit
 *
 * @a: parameter
 *
 * Return: return the last digit
 */
int print_last_digit(int a)
{
	int i = a % 10;

	if (i < 0)
	{
		_putchar(-i + '0');
		return (-i);
	}
	else
	{
		_putchar(i + '0');
		return (i);
	}
}
