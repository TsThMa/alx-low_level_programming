#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return:On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * main - Entry point
 * Write a program that prints a string exactl, followed by a new line.
 * Return: 1
 */
int main(void)
{
const char msg[] = "and that piece of art is useful\" -\
 Dora Korpar, 2015-10-19";
syscall(SYS_write, 1, msg, sizeof(msg));
_putchar('\n');
return (1);
}
