#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: to print the last digit of the number stored in the variable n
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int last_digit = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, last_digit);
	}
	else if (n == 0)
	{
		printf("Last digit of %d and is 0", n);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6", n, last_digit);
	}
return (0);
}
