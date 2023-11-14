#include "simpleshell.h"
/**
 * con_number - converts number to a string
 * @numbs: number to be converted
 * Return: number which is digits will now be a string
 * and will be returned as string
 */
char *con_number(int numbs)
{
	char *num;
	int entire_digits, k;

	entire_digits = numb(numbs);
	num = malloc(entire_digits * sizeof(char) + 1);
	if (num == NULL)
		return (NULL);
	if (numbs == 0)
	{
		num[0] = '0';
		num[1] = '\0';
		return (num);
	}

	num[entire_digits] = '\0';

	for (k = entire_digits - 1; numbs != 0; numbs /= 10, j--)
	{
		num[k] = (numbs % 10) + '0';
	}

	return (num);
}
