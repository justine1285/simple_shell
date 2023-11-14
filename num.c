#include "simpleshell.h"
/**
 * numerical - check if a parameter is a digir
 * @number: number needed to check
 * Return: 1 if it is a number and 0 if not
 */
int numerical(unsigned int number)
{
	return (number >= '0' && number <= '9');
}
