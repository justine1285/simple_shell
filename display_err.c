#include "simpleshell.h"
/**
 * display_err - function prints he std error (2)
 * @message: message to be printed is passed here
 * Return: no of bytes printed by the function
 */
int display_err(char *message)
{
	return (outputToFD(message, 2));
}
