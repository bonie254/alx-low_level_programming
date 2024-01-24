#include "main.h"

/**
 * _strncat - concerntrates 2 stringgs using at most an inputted number
 * @dest: the string to be appended upon
 * @src: the string to be appende to dest
 * @n: number of bytes of src to be appende to dest
 *
 * Return: A pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
