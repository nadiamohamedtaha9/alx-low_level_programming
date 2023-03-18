#include <stdio.h>
/**
 * main - entry point
 * Description: prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n == 57)
		{
			putchar(n);
			putchar('$');
		}
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
