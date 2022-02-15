#include "main.h"
/**
 * _isalpha - checks of letter is uppercase character
 * @c: value for validate
 * Return: Always 0;
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
