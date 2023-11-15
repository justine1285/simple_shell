#include "simpleshell.h"
#include "shell.h"
/**
 * outputToFD - prints a string
 * @message: prints a string instead of a character
 * @file_des: file descriptor to print either 1 2 or 0
 * Return: no of bytes printed
 */
int outputToFD(char *message, int file_des)
{
	int buffer;

	buffer = str_lenz(message);
	return (write(file_des, message, buffer));
}
