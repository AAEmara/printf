#include "main.h"
/**
 * get_p_func - function that selects the correct function to
 * spacific type of data.
 * @s : the operator passed as argument to the program.
 * Return: a pointer to the function that corresponds to
 * the operator given as a parameter.
 */
int (*get_p_func(char s))(va_list)
{
	specifiers specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_int},
		{'b', print_binary},
		{'u', print_unsind},
		{'o', print_octal},
		{'x', print_x_small},
		{'X', print_x_capital},
		{'S', print_str},
		{'r', print_revers},
		{'R', print_rot13},
		{0, NULL}
	};
	int i;

	i = 0;
	while (specifiers[i].specifier != 0)
	{
		if (specifiers[i].specifier == s)
		{
			return (specifiers[i].f);
		}
		i++;
	}
	return (NULL);
}
