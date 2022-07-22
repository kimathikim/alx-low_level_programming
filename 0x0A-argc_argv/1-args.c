#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argc: arg count
 * @argv: vector of strings with arguments
 *
 *  Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
