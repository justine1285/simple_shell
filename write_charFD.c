#include "simpleshell.h"
#include "shell.h"
/**
 * fixchar_FD - program writes character to particular file descriptor
 * @car: the character to br printed
 * @fil_d: file descriptor to be 0 1 or 2
 * Return: 1
 */
int fixchar_FD(char car, int fil_d)
{
	return (write(fil_d, &car, 1));
}
