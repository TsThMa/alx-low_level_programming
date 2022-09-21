#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return is positive if number greater than 0
 * Return is 0 if number number is 0
 * Return is negative if number is less than 0
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)				/*n is smaller than o*/
		printf("%d is positive\n", n);
	else if (n == 0)			/*n is 0*/
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
