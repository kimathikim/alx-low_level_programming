#include "main.h"
/**
 * main - main func
 *
 * Return: End file
 */
int main(void)
{
	char string[8] =  "_putchar";

	for (int i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar(10);
	return (0);
}
