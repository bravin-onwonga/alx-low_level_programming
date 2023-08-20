#include "variadic_functions.h"

/**
 * sum_them_all - sums all the arguments passed to a variadic func
 * 
 * @n: first argument passed
 * Return: sum of all args; 0 if arg is 0
*/

int sum_them_all(const unsigned int n, ...)
{
    va_list ap;
    unsigned int i, num;
    int sum;

    va_start(ap, n);
    sum = 0;
    for (i = 0; i < n; i++)
    {
        num = va_arg(ap, int);
        if (num == 0)
            return (0);
        sum = sum + num;
    }
    va_end(ap);
    return (sum);
}