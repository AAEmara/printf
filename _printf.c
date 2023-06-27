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
	int len = strlen(format);
	int i;

	va_start(args, format);
	for (i = 0; i < len; i++)
	{
		/**
		 * Printing a String.
		 */
		if (format[i] == '%' && format[i + 1] == 's')
		{
			char *x = va_arg(args, char *);
			int len_s = strlen(x);

			write(1, x, len_s);
			i++;
		}
		/**
		 * Printing a Character
		 */
		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			char c = va_arg(args, int);

			write(1, &c, 1);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			char pcent = '%';

			write(1, &pcent, 1);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
		}
	}
	va_end(args);

	return (len);
}
