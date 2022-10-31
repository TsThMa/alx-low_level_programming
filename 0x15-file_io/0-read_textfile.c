#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - funct that reads text file and prints it to the POSIX stdout
 *
 * Return: actual number of letters it could read and print
 * return 0 if: file can not be opened or read,
 * filename is NULL,
 * write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

