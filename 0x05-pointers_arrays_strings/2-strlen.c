#include "main.h"
#include <string.h>

/**
 *  _strlen -is a function that returns the length of a string.
 *  @s: is a string.
 *  Return: nothing
 */
int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	len++;

	return (len);
}
