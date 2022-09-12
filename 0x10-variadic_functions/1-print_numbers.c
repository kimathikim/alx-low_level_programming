#include "variadic_functions.h"
void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i, arg;
    va_list(num);

    i = n;
    va_start(num,n);
   

    while (i > 0)
    {
        printf("%d" ,  va_arg(num, int));
        if (i != 1)
        {
            printf("%s", separator);
        }
        i--;
    }
}

int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}