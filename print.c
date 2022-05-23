#include "main.h"

/**
 * _print - it print the strings base on the conditions
 * @format: it takes in a string as an argument
 * @args: it a list of variadic function
 * Return: 0;
 */
int _print(const char *format, va_list args)
{
	int i, j;
	char *s;

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					_putchar(va_arg(args, int));
					i++;
					break;
				case 's':
					s = va_arg(args, char *);
					for (j = 0; s[j]; j++)
						_putchar(s[j]);
					i++;
					break;
				default:
					_putchar(format[i]);
					break;
			}
		}
		else
			_putchar(format[i]);
	}
	return (0);
}
