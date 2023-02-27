#include "main.h"
#include <stdio.h>

/**
 * main - prints a string in reverse.
 *
 * Return: Always 0.
*/

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	return (0);
}
