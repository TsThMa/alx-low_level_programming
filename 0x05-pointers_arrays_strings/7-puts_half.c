#include <stdio.h>
#include "main.h"

/**
 * puts_half - a function that prints half of a string.
 * The function should print the second half of the string.
 * If num of chars is odd, func should print the last n characters of string
 * where n = (length_of_the_string - 1) / 2.
 * @str: string to print
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, len = _strlen(str);

	for (i = ((len - 1) / 2) + 1; i < len; i++)
		putchar(*(str + i));
	putchar(10);
}

/**
 * _strlen - a funtion that returns the length of a string.
 * @s: string.
 * Return: the length of the given string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}
