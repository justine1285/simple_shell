#include "simpleshell.h"
/**
 * display_msg - prints message to the stdout
 * @message: message to print out
 * Return: number of bytes printed
 */
int display_msg(char *message)
{
	return (outputToFD(message, 1));
}
