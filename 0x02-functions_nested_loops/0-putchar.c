#include "main.h"
/**
 * main - main func
 *
 * Return: End file
 */
int main(void)
{
	char string[8] =  "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(string[i]);
		++i;
	}
	_putchar(10);
	return (0);
}
