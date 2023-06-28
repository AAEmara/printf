#include "main.h"
/**
 * print_char - printfs a char from var args
 * @args: va_list to print from
 * Return: length of printed
 */
int print_char(va_list args)
{
	char arg = va_arg(args, int);

	return (_putchar(arg));
}

/**
 * print_string - printfs a string from var args
 * @args: va_list to print from
 * Return: length of printed
 */
int print_string(va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
		arg = "(null)";
	return (write(1, arg, strlen(arg)));
}

/**
 * print_int - print a Integer from var args
 * @args: va_list to print from
 * Return: length of printed
 */
int print_int(va_list args)
{
	int  arg = va_arg(args, int);
	unsigned int len = 0;

	if (arg < 0)
	{
		len += _putchar('-');
		arg = arg * -1;
	}
	return (len + re_int(arg));
}
/**
 * re_int - print a Integer recursion
 * @t: int to be printed
 * Return: length of printed
 */
int re_int (unsigned int t)
{

	if (t < 10)
		return (_putchar(t + '0'));
	return (re_int(t / 10) + _putchar((t % 10) + '0'));
}
