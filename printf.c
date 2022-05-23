#include "main.h"

/**
 * _printf - it print an input
 * @format: it's a pointer to a string
 * Description:  it takes a string and check if it sees '%s' or '%c, if yes
 *               it takes the matched argumetn from arg_list and print it.
 * Return: it returns the string pointered to by format.
 */

int _printf(const char *format, ...)
{
	va_list chara;

	va_start(chara, format);
	_print(format, chara);
	va_end(chara);
	return (0);
}
