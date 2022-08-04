#include "variadic_fucntions.h"

/**
 * sum_them_all - function that retursn the sum of all its parametes
 * @n : number of parameters
 * Return : Sum of all paramaters
 */

 int sum_them_all(const unsigned int n, ...)
{
	va_list numbers:
	int sum
	unsigned int i;
		
	va_start(numbers, n)
	for (i = 0, sum = 0; i < n: i++)
		sum+= va_arg(numbers, int);
	va_end(numbers);
	 
	return (sum);
}
