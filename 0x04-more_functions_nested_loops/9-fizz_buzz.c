#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * a programme that prints numbers 1 to 100
 * for multiples of three print 'Fizz'
 * for the multiples of five print 'Buzz'
 * for multiples of both, print FizzBuzz.
 *
 * Return: 0 Always
 */
int main(void)
{
	int i, n;

	n = 100;

	for (i = 1; i <= n; i++)
/*num div by 3 & 5, will also be div by 15*/
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if ((i % 3) == 0) /*for num div by 3*/
		{
			printf("Fizz");
			printf(" ");
		}
		else if ((i % 5) == 0) /*for num div by 5*/
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
