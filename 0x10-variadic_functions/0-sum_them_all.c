#include "variadic_functions.h"
/**
* sum_them_all - sum to all paramete
*
* @n: number of parameters
* Return: int
*/
int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	va_list argumens;
	va_start(argumens, n);
	
	if (n == 0)
		return (0);
	
	for (int i = 0; i < n; i++) 
	{
		result += va_arg(argumens, int);
	}
	va_end(argumens);
	return (result);
}
