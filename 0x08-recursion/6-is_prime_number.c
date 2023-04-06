#include "main.h"
/**
 * is_prime_number - function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: int nummber
 * @othern: int
 * Return: 0 or 1
 */
int check_prime(int n, int othern);
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all numbers < n if can divi on it
 * @n: int
 * @othern: int
 * Return: int
 */
int check_prime(int n, int othern)
{
	if (othern >= n && n > 1)
	{
		return (1);
	}
	else if (n % othern == 0 || n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, othern + 1));
	}
}
