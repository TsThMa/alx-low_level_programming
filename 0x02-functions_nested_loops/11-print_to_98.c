#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98.
 * The first printed number should be the number passed to your function
 * The last printed number should be 98.
 * @n: input
 * Return: Nothing
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; --count)
			printf("%d, ", count);
	else
		for (count = n; count < 98; ++count)
			printf("%d, ", count);

	printf("98\n");
}
