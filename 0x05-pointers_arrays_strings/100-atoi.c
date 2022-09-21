#include "main.h"
#include <stdio.h>

/**
 * _atoi - a function that convert a string to an integer.
 * The num in the string can be preceded by an infinite numb of characters
 * You need to take into account all the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * @s: the string to be changed
 * Return: the converted int
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
		break;

	} while (*s++);
		return (num * sign);
}
