#include "main.h"
#include <stdio.h>

/**
 * _strlen -is a function that returns the length of a string.
 * @s: is a string
 * Return: nothing.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	len++;
	return (len);
}

/**
 * _puts_recursion -  a function that prints a string, followed by a new line.
 * @s: a pointer to string.
 * Return: 0
 */
void _puts_recursion(char *s)
{
	int len = 0;

	s  = "Puts with recursion";

	if (len >= 2)
	{
		len++;
		_puts_recursion(s);
	}
}
