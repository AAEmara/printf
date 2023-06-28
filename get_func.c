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
	flags flags[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_int},
		{'b', print_binary},
		{'r', print_revers},
		{'R', print_rot13},
		{0, NULL}
	};
	int i;

	i = 0;
	while (flags[i].flag != 0)
	{
		if (flags[i].flag == s)
		{
			return (flags[i].f);
		}
		i++;
	}
	return (NULL);
}
