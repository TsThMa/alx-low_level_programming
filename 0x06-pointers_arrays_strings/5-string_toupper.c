#include "main.h"

/**
 * string_toupper - a function that changes all lowercase string letters
 * to uppercase letters
 * @s: pointer to input char
 *
 * Return: @s
 */
char *string_toupper(char *)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}
