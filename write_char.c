#include "simpleshell.h"
/**
 * writechars - prints char to stdout
 * @character: character to print
 * Return: 1 if true
 */
int writechars(char character)
{
	return (write(1, &character, 1));
}
