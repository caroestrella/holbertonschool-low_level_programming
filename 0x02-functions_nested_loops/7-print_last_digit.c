#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: the int to check
 * Return: last digit of a number
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (r < 0)
	{
		r = r * -1;
	}

	_putchar(r + '0');
	return (r);
}
