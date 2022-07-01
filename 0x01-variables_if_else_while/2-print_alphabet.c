#include <stdio.h>
/**
 * main - main func
 *
 * Return: End the prog
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		printf("%c", letter);
		printf("\n");
	}
	return (0);
}
