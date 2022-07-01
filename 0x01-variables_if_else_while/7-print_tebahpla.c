#include <stdio.h>
/**
 * main - main func
 *
 * Return: End file
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; --n)
		putchar(n);


	putchar(10);
	return (0);
}
