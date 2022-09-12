#include "variadic_functions.h"
/**
 * print_strings - function
 * @separator: param
 * @n: param
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *arg;

	va_list(num);
	i = n;
	va_start(num, n);
	arg = va_arg(num, char *);
	while (i > 0)
	{
		if (arg != NULL)
		{
			printf("%s", arg);
		}
		else
		{
			printf("(nil)");
		}
		if (i != 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}

		arg = va_arg(num, char *);
		i--;
	}
	putchar(10);
}
