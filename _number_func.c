#include "main.h"

/**
 * print_binary - print a binary from var args
 * @args: va_list to print from
 * Return: length of printed
 */
int print_binary(va_list args)
{
	unsigned int  arg = va_arg(args, int);

	return (re_binary(arg));
}
/**
 * re_binary - print a binary recursion
 * @t: int to be printed
 * Return: length of printed
 */
int re_binary(unsigned int t)
{
	if (t < 2)
		return (_putchar(t + '0'));
	return (re_binary(t / 2) + _putchar((t % 2) + '0'));
}

/**
 * print_unsind - prints an unsigned value from a variable arguments list.
 *
 * @args: va_list value to be printed by the function.
 *
 * Return: length of the printed value
 */
int print_unsind(va_list args)
{
	unsigned int arg = va_arg(args, unsigned int);

	return (re_unsind(arg));
}

/**
 * re_unsind - prints an unsigned int in a recursive way.
 *
 * @t: Unsigned Integer value to be printed.
 *
 * Return: length of the printed value.
 */

int re_unsind(unsigned int t)
{
	if (t < 10)
	{
		return (_putchar(t + '0'));
	}

	return (re_unsind(t / 10) + _putchar((t % 10) + '0'));
}
