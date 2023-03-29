#include <unistd.h>

/**
 * _putchar - write character c to stdout
 * @c: the character to be print
 * Return: 1 on success, 0 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
