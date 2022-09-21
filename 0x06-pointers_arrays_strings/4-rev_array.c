#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_array - a function that reverse an array.
 * @a: an input array
 * @n: number of elements of array
 * Return: Nothing
 *
 */
void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1;

/**
* main - Entry point
* set value in array a in temp
* then place the last array in
* the first array then place
* value in temp to last array
* @e: an array integer
*/
	while (s < e)
	{
	temp = a[s];
	a[s] = a[e];
	a[e] = temp;
	s++;
	e--;
	}

}
