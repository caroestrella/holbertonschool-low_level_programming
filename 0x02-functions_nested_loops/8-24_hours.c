#include "main.h"
/**
	*	jack_bauer - prints every minute in the life of jack bauer
	*	Return: no return just deathhhhhhhhhhhhhhh ha ha ha
	*/
void jack_bauer(void)
{
	int hrs;
	int mins;

	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(58);
			_putchar((mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
		}
	}
}
