#include "main.h"

/**
 * _Isupper - checks for upper case letters
 *
 * Return:1 if character is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int _isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			_isupper = 1;
			break;
		}
	}

	return (_isupper);
}

