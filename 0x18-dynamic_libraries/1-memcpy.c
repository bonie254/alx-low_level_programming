#include "main.h"

/**
 * _memcpy- a afunction that copies a memory area
 * @dest: destination
 * @src : source
 * @n: how much we copy
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
