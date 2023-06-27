#include "main.h"
/**
 * print_char - printfs a char from var args
 * @args: va_list to print from
 * Return: length of printed
 */
int print_char(va_list args)
{
	return (_putchar((char) va_arg(args, int)));
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
