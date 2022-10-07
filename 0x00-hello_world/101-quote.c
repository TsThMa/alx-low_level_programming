#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

/**
 * main - Entry point
 * Write a program that prints a string exactl, followed by a new line.
 * Return: 1
 */
int main(void)
{

const char msg[] = "and that piece of art is useful\" - Dora Korpar, \
2015-10-19";
syscall(SYS_write, 1, msg, sizeof(msg));
putchar('\n');
return (1);
}
