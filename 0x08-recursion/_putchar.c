#include <unistd.h>

/**
 * _putchat - write the character c to the stdout
 * @c: the character to be print
 * Return: on Success1, on erroe -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
