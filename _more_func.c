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
