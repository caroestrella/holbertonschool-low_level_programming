#include "main.h"
/**
 * _islower - checks of letter is uppercase or lowercase character
 * @c: value for validate
 * Return: Always 0;
 */
int _islower(int c)
{
if ((c >= 'a') && (c <= 'z'))
{
return (1);
}
else
{
return (0);
}
}
