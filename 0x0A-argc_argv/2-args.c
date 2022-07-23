#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 * @argc: count
 * @argv: vector of string with arg
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i =0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
