#include <stdio.h>
/**
 * main - main func
 * description: print a-z
 * Return: End prog
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
			}
	}

	printf("\n");

	return (0);
}
