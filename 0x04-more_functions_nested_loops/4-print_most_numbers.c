#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 without printing 2 and 4
 *
* Return: numbers 0-9 without 2 and 4
 */
void print_most_numbers(void)
{
char x;

for (x = '0'; x <= '9'; x++)
{
  if (x != '2' && x != '4')
_putchar(x);
}
_putchar('\n');
}
