#include <unistd.h>
/**
 * _putchar - whrite the char c to stdio
 *
 * Return: End file
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
