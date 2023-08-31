#include "main.h"
/**
 * factorial - get the factorial of a number
 * @n: factor
 * Return: fsctorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
