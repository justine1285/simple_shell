#include "simpleshell.h"
/**
 * display_err - prints the standard error (2)
 * @message: message to prints
 * Return: number of bytes printed by the function
 */
int display_err(char *message)
{
	return (outputToFD(message, 2));
}
