#include "main.h"

/**
 * _printf - Prints the string given with respect to its specifiers.
 *
 * @format: The text entered between double quotes.
 *
 * Return: The number of character of the string.
 */

int _printf(const char *format, ...)
{
	va_list args;
	int (*fun)(va_list);
	int i = 0;
	unsigned int len = 0;

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			fun = get_p_func(format[i + 1]);
			if (fun != NULL && format[i + 1] != '%')
			{
				len += fun(args);
				i++;
			}
			else if (format[i + 1] == '%')
			{
				len += _putchar('%');
				i++;
			}
			else
				len += _putchar(format[i]);
		}
		else
		{
			len += _putchar(format[i]);
		}
		i++;
	}
	va_end(args);

	return (len);
}
