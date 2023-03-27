#include <unistd.h>
/**
 * _putchar - write the character c to stdout
 * @c: the character to be print
 * Return: on cuccess 1, on  error -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
