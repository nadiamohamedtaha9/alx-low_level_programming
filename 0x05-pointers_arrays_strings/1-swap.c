#include "main.h"
/**
 * swap_int - swap the value of two integers
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
