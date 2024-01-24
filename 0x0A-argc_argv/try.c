#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check - check strings
 * @str: sring array
 *
 * Return: Always 0 (success)
 */

int check(char *str)
{
	unsigned int i;

	i = 0;
	while (i < strlen(str))
	{
		if (!isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;
	int to_int;

	for (i = 1; i < argc; i++)
	{
		if (check(argv[i]))
		{
			to_int = atoi(argv[i]);
			sum = sum + to_int;
		}
		else
		{
			printf("Error\n");
		return (1);
		}	
	}
	printf("%d\n", sum);
	return (0);
}
