#include <stdio.h>
/**
 * main - ntry point
 * Description: prints the lowercase alphabet in reverse
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 122; n >= 97; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
