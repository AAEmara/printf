#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
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
int re_int (int t);
int print_int(va_list args);
int re_binary(unsigned int t);
int print_binary(va_list args);
int print_revers(va_list args);
#endif
