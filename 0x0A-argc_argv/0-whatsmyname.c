#include <stdio.h>
/**
 * main - entry with arg
 *
 * @argc: counter
 * @argv: vector of string with arg passed
 *
 * Return: always 0
 */
int main(int argc, char* argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
