#include <stdio.h>

/**
 * main - Entry point
 * Description: print all possible different combinations of three digits.
 * numbers shouldn't repeat
 * each no. combination is seperated by a comma ',' followed by ' '.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 1;
	int c = 2;

	while (i <= 8)
	{
	while (j <= 9)
	{
	while (c <= 9)
	{
		if ((i < j) && (j < c))
		{
			putchar(i + 48);
			putchar(j + 48);
			putchar(c + 48);
		if (i + j + c <= 27)
		{
			putchar(',');
			putchar(' ');
		}
	}
	++c;
	}
	++j;
	}
	++i;
	}
	putchar('\n');
	return (0);
}
