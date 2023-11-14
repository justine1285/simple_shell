#include "simpleshell.h"
/**
 * display_msg - prints a message to the stdout
 * @message: message to print to stdout
 * Return: No of byte printed
 */
int display_msg(char *message)
{
	return (outputToFD(message, 1));
}
