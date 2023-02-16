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

	printf("Size of a char: %ld byte(s)\n", sizeof(charType));
	printf("Size of an int: %d bytes(s)\n", sizeof(integerType));
	printf("Size of a long int: %d byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(longlongType));
	printf("Size of a float: %ld byte(s)\n", sizeof(floatType));
	return (0);
}
