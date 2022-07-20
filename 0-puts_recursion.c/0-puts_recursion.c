#include "main.h"
/**
 * _puts_recursion  - function to print a string followes by a new line
 *
 * @s: parameter
 *
 */
void  _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar(10);
	}
	_putchar(s[10]);
	s++;
	_puts_recursion(s);
}
