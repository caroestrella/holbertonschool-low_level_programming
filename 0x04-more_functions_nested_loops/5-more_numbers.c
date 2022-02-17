#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14 x 10
 *
* Return: always 0
 */
void more_numbers(void)
{
char x;
int y;

for (y = 0; y < 10; y++)
{
for (x = 0; x <= 14; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
