#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: the int to check
 * Return: last digit of a number
 */
int print_last_digit(int n)
{

if (n < 0)
{
putchar('-');
n = -n;
}

if (n == 0)
{
putchar('0');
}

if (n / 10)
{
print_last_digit(n / 10);
}
_putchar(n % 10 + '0');
}
