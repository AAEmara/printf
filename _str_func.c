#include "main.h"

/**
 * print_str - printfs a string from var args
 * @args: va_list to print from
 * Return: length of printed
 */
int print_str(va_list args)
{
	char *arg = va_arg(args, char *);
	int l, i;

	if (arg == NULL)
	{
		arg = "(null)";
		return (write(1, arg, strlen(arg)));
	}
	l = 0;
	i = 0;
	while (arg[i])
	{
		if ((arg[i] > 0 && arg[i] < 32) || arg[i] >= 127)
		{
			l += _printf("\\x");
			if (arg[i] <= 15)
				l += _putchar('0');
			l += re_x_capital(arg[i]);
		}
		else
		{
			l += _putchar(arg[i]);
		}
		i++;
	}
	return (l);
}
/**
 * print_revers - printfs a string from var args
 * @args: va_list to print from
 * Return: length of printed
 */
int print_revers(va_list args)
{
	char *arg = va_arg(args, char *);
	int l, i;

	if (arg == NULL)
	{
		arg = "(null)";
		return (write(1, arg, strlen(arg)));
	}
	l = strlen(arg);
	i = l - 1;
	while (i >= 0)
	{
		_putchar(arg[i]);
		i--;
	}
	return (l);
}
/**
 * print_rot13 - printfs a string from var args
 * @args: va_list to print from
 * Return: length of printed
 */
int print_rot13(va_list args)
{
	char *arg = va_arg(args, char *);
	int l, i, j, f;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char beta[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	if (arg == NULL)
	{
		arg = "(null)";
		return (write(1, arg, strlen(arg)));
	}
	l = strlen(arg);
	i = 0;
	while (i < l)
	{
		f = 0;
		for (j = 0; alpha[j] && !f; j++)
		{
			if (arg[i] == alpha[j])
			{
				_putchar(beta[j]);
				f = 1;
			}
		}
		if (!f)
		{
			_putchar(arg[i]);
		}
		i++;
	}
	return (l);
}
