#include <limits.h>
#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int x, y;

	x =  printf("%d\n", 123456);
	y =  _printf("%d\n", 123456);
	printf("%i, %i\n", x, y);

	x =  printf("%i\n", 'c');
	y =  _printf("%i\n", 'c');
	printf("%i, %i\n", x, y);

	x =  printf("%i\n", -1);
	y =  _printf("%i\n", -1);
	printf("%i, %i\n", x, y);

	x =  printf("%i\n");
	y =  _printf("%i\n");
	printf("%i, %i\n", x, y);

	x = _printf("%i%", 5);
	y = printf("%i%", 5);
	printf("%i, %i\n", x, y);

	x = _printf("%i\n", 1.2);
	y = printf("%i\n", 1.2);
	printf("%i, %i\n", x, y);

	x = _printf("%u\n", INT_MIN);
	y = printf("%u\n", INT_MAX);
	printf("%i, %i\n", x, y);
	return (0);
}
