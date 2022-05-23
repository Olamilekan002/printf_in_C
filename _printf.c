#include "main.h"

/**
 * _printf - it print a string
 * @format: a pointer to the string
 * Description: it only accept a character, we wil continue to upadte it.
 * Return: Returns an int to the stdout(standard output)
 */

int _printf(const char *format, ...)
{
	int i, count = 0;
	char *str;
	va_list chara;

	va_start(chara, format);

	/* To find the length of the string(format) */
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
			count--;
		count++;
	}

	/* allocating a dynamic memory */
	str = malloc(count * sizeof(int));
	if (str == NULL)
		return ('\0');

	/* printing the result */
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			str[i] = va_arg(chara, int);
			i++;
		}
		else
			str[i] = format[i];
	}
	return (write(1, str, i));
}
