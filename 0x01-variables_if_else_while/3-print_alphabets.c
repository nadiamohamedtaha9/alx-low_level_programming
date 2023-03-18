#include <stdio.h>
/**
 * main - entry point
 * Description:  a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line
 * Return: always 0 (Success)
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		m++;
	}
	putchar('\n');
	return (0);
}
