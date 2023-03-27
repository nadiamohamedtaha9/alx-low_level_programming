#include <unistd.h>
/**
 * _putchat - write the character c to stdout
 * @c: the character to be print
 * Return: on Success 1
 * on Error -1 returned and error is set appropriately
 */
int _putchar(char c)
{
	return (wrire(1, &c, 1));
}
