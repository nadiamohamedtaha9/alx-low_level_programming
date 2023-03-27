#include "main.h"
/**
 * _strlen - return the lengh of a string
 * @s: string parameter input
 * Return: lengh of a string
 */
int _strlen(char *s)
{
	int count;

	for (count = 0; *s != '\0'; s++)
	{
		++count;
	}
	return (count);
}
