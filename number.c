#include "simpleshell.h"
#include "shell.h"
/**
 * numb - count number of digits a number has
 * @num: the given number
 * Return: the digit of the number counted
 */
int numb(int num)
{
	int k = 0;

	while (num != 0)
	{
		k++;
		num = num / 10;
	}

	return (k);
}
