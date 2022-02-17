#include "main.h"

/**
 * print_diagonal - function to print diagonal line
 * @n : integer value
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('\\');
		}
	}
	_putchar('\n');
}
