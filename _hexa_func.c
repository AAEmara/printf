#include "main.h"

/**
 * print_x_small - prints the given decimal value in hexadecimal numbering
 * system with [a-f] range of alphabets.
 *
 * @args: va_list value to be printed in hexadecimal numbering system.
 *
 * Return: Length of the printed value.
 */

int print_x_small(va_list args)
{
	unsigned int arg = va_arg(args, int);

	return (re_x_small(arg));
}

/**
 * re_x_small - prints the given value in hexadecimal numbering system in a
 * recursive way, taking into consideration the [a-f] range of alphabets.
 *
 * @t: Unsigned Integer value to be printed in hexadecimal numbering system.
 *
 * Return: Length of the printed value.
 */

int re_x_small(unsigned int t)
{
	int r = t % 16;

	if (t < 16)
	{
		if (r >= 10 && r <= 15)
			return (_putchar((r - 10) + 'a'));
		else
			return (_putchar(r + '0'));
	}
	else
	{
		if (r >= 10 && r <= 15)
			r = r - 10 + 'a';
		else
			r = r + '0';
	}
	return (re_x_small(t / 16) + _putchar(r));
}

/**
 * print_x_capital - prints the given decimal value in hexadecimal numbering
 * system with [A-F] range of alphabets.
 *
 * @args: va_list value to be printed in hexadecimal numbering system.
 *
 * Return: Length of the printed value.
 */

int print_x_capital(va_list args)
{
	unsigned int arg = va_arg(args, int);

	return (re_x_capital(arg));
}

/**
 * re_x_capital - prints the given value in hexadecimal numbering system in a
 * recursive way, taking into consideration the [A-F] range of alphabets.
 *
 * @t: Unsigned Integer value to be printed in hexadecimal numbering system.
 *
 * Return: Length of the printed value.
 */

int re_x_capital(unsigned int t)
{
	int r = t % 16;

	if (t < 16)
	{
		if (r >= 10 && r <= 15)
			return (_putchar((r - 10) + 'A'));
		else
			return (_putchar(r + '0'));
	}
	else
	{
		if (r >= 10 && r <= 15)
			r = r - 10 + 'A';
		else
			r = r + '0';
	}
	return (re_x_capital(t / 16) + _putchar(r));
}
