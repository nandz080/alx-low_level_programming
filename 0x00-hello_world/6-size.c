#include <stdio.h>

/**
 * main - Entry point
 * C program that prints size of various data types
 *
 * Return: Always 0 (Success0
**/

int main(void)
{
	char charType;
	int integerType;
	long longType;
	long long longlongType;
	float floatType;

	printf("Size of a char: %ld byte\n", sizeof(charType));
	printf("Size of an int: %d bytes\n", sizeof(integerType));
	printf("Size of a long int: %d byte\n", sizeof(longType));
	printf("Size of a long long int: %d byte\n", sizeof(longlongType));
	printf("Size of a float: %ld bytes\n", sizeof(floatType));
	return (0);
}
