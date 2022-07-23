#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints all arguements
 * @argc: arguement count
 * @argv: array of pointers to CLI arguement
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("%s\n", "Error\n");
		return (1);
	}
	else
	{
		 mul = atoi(argv[argc - 1]) * atoi(argv[argc - 2]);
		 printf("%d\n", mul);
	}
	return (0);
}
