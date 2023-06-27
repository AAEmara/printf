#ifndef PRINTF
#define PRINTF

#include <unistd.h>
#include <string.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int digits_count(int num);
char int_to_char(int digit);
char *int_to_str(int num);

#endif
