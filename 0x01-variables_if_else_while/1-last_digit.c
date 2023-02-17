#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	printf("Last digit of %d ", n);
	if (digit > 5)
	{
		printf("is %d and is greater than 5\n", digit);
	}
	if (digit == 0) 
	{
        	printf("is %d and is 0\n", digit);
        }
	if (0 > digit < 6) 
	{
        	printf("is %d and is less than 6 and not 0\n", digit);
        }
	/* your code goes there */
	return (0);
}
