#include <stdlib.h>
#include <stdio.h>

/**
 * main - function that prints its own.
 *
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char* argv[])
{
	if (argc >= 0)

		printf("%s\n", argv[0]);

	return (0);
}
