#ifndef PRINTF_H
#define PRINTF_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
/**
 * struct specifiers - struct hold formated string flags.
 * @specifier: flag to conseder.
 * @f: function to run.
 */
typedef struct specifiers
{
	char specifier;
	int (*f)();
} specifiers;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_p_func(char s))(va_list);
int print_char(va_list args);
int print_string(va_list args);
int re_int (unsigned int t);
int print_int(va_list args);
int re_binary(unsigned int t);
int print_binary(va_list args);
int print_unsind(va_list args);
int re_unsind(unsigned int t);
int print_revers(va_list args);
int print_rot13(va_list args);
int print_octal(va_list args);
int re_octal(unsigned int t);
int print_x_small(va_list args);
int re_x_small(unsigned int t);
int print_x_capital(va_list args);
int re_x_capital(unsigned int t);

#endif
