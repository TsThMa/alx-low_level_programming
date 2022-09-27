#include "main.h"
#include <stdio.h>

/**
 * _memcpy - a function that copies memory area.
 * @dest: to memory area
 * @src: a memory area 
 * @n: bytes from memory 
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	*(src + i)=dest;
	}
	return (dest);
}
