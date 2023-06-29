#include "main.h"

/**
 * print_octal - prints a decimal value in octal numbering system from
 * a variable arguments list.
 *
 * @args: va_list value parameter.
 *
 * Return: Length of the printed value.
 */

int print_octal(va_list args)
{
	unsigned int arg = va_arg(args, int);

	return (re_octal(arg));
}

/**
 * re_octal - prints the given decimal value in octal numbering system in
 * a recursive way.
 *
 * @t: Unsgined Integer value to be printed in octal numbering system.
 *
 * Return: Length of the printed value.
 */

int re_octal(unsigned int t)
{
	if (t < 8)
	{
		return (_putchar(t + '0'));
	}

	return (re_octal(t / 8) + _putchar((t % 8) + '0'));
}
