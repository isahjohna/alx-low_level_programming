#include "main.h"

/**
 * print_last_digit - return the last digit
 * @n: parameter
 * Return: absolute 0
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar('0' x);
	putchar('\n');
	return (0);
}