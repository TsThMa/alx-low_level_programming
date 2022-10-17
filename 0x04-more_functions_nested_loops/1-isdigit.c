#include "main.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9).
 * @c: An input integer
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	int _isdigit;
	_isdigit = c;

	while (c > 0)
	{
		if ((c >= '0') && (c <= '9'))
		{
			return(1);
		}
		else
		{
			return(0);
		}
	}
	return(_isdigit);
}
