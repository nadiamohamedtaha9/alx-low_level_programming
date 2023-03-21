#include "main.h"
/**
 * print_sign - print the sign of the number
 * @n: The number to be checked
 * Return: 1 for positive number, -1 for negitive number, 0 for enything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
