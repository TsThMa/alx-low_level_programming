#include "main.h"
#include <stdio.h>

/**
 * more_numbers -  a function that prints 10 times the numbers, from 0 to 14
 *
 * Return: nothing.
 */
void more_numbers(void)
{
	int i = 0, c;

	while (i < 10)
	{
		c = '0';

		while (c <= '9')
		{
			putchar(c);
			++c;
		}
		++i;
		putchar('\n');
	}
}
