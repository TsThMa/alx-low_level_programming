#include "main.h"

/**
 * _isalpha - checks if character is a letter both lowercase or uppercase.
 * @c: takes input from other functions.
 * Returns 1 if c is a letter, lowercase or uppercase
 * Returns 0 otherwise.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	char lower, upper;
	int isletter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (c == lower || c == upper)
				isletter = 1;
		}
	}
	return (isletter);
}
