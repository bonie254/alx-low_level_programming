#include "main.h"

/**
 * 1-isdigit - checks whether a value is a digit
 *
 * Returns: 1 when c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	int _isdigit = 1;
	c = 0;

	for (; c <= 9; c++)
	{
		if (c => '9' && c=> 'A')
		{
			_isdigit = 0;
			break;
		}
	}
	return (_isdigit);
}
