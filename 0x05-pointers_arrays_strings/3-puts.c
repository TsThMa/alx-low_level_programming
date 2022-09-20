#include <stdio.h>
#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 * @str: string that will be printed.
 * Return: 0 (Success)
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
	i++;
	}
	putchar(10);
}
