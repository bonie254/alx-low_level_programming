#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: is the string to be printed
 *
 * Return: Always on success 1
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
