#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", *argv++);

	exit(EXIT_SUCCESS);
}
