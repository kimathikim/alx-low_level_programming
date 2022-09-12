
#include "variadic_functions.h"
/**
 * sum_them_all - func
 * @n: param
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum, arg;

	va_list(num);
	va_start(num, n);

	i = n;
	sum = 0;
	if (n == 0)
		return (0);
	arg = va_arg(num, int);
	while (i > 0)
	{
		sum += arg;
		arg = va_arg(num, int);
		i--;
	}
	return (sum);
	va_end(num);
}

