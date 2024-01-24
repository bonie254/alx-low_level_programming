#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the char c into the stdout
 * @c : The character to print 
 *Return: 1 on success, 0 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
