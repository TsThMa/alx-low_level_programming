#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_toupper - a function that changes all lowercase string letters
 * to uppercase letters
 * @s : pointer to input char
 *
 * Return: @s
 */
char *string_toupper(char *)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);

}
