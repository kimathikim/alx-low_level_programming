#include "variadic_functions.h"
/**
 * print_numbers - func
 * @separator: parameter
 * @n: parameter
 * @...
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, arg;

	va_list(num);
	i = n;
	va_start(num, n);

	while (i > 0)
	{
		printf("%d", va_arg(num, int));
		if (i != 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
		i--;
	}
}
