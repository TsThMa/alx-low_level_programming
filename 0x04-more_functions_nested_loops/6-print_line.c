#include "main.h"
#include <stdio.h>

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: the number of times the character '_' should be printed
 * Return: nothing
 */
void print_line(int n)
{
	n = 0;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		putchar('_');
		++n;
	}
	putchar('\n');
}
