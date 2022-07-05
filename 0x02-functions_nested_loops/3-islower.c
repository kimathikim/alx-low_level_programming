#include "main.h"
/**
 * _islower - func
 *
 * @c: The char to evaluate
 *
 * Return: Get 1 if c upper
 * Get 0 else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
