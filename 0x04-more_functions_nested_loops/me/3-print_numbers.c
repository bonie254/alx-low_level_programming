#include "main.h"

/**
 * print_numbers - print 0 to 9\n
 *
 * Return: void
 */

void print_numbers(void)
{
	char c;

	c = 0;
	while (c < 10)
	{
		_putchar(c);
		c++;
	}
}
