#include "main.h"

/**
 * _putchar - it print characters
 * @c: input character
 * Return: it return int
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
