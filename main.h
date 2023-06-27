#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

/**
 * struct flags - struct hold formated string flags.
 * @flag: flag to conseder.
 * @f: function to run.
 */
typedef struct flags
{
	char flag;
	int (*f)();
} flags;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_p_func(char s))(va_list);
int print_char(va_list args);
int print_string(va_list args);
#endif
