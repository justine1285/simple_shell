#include "simpleshell.h"
/**
 * _atois - program converts string to int
 * @ss: string to be converted
 * Return: integer
 */
int _atois(char *ss)
{
	int y;
	unsigned int tally = 0, mag = 0, at = 0, pat = 1, w = 1;

	while (*(ss + tally) != '\0')
	{
		if (mag > 0 && (*(ss +) < '0' || *(ss + tally) > '9'))
			break;

		if (*(ss + tally) == '-')
			pat *= -1;

		if ((*(ss + tally) >= '0') && (*(ss + tally) <= '9'))
		{
			if (mag > 0)
				w *= 10;
			mag++;
		}
		tally++;
	}

	for (y = tally - mag; y < tally; y++)
	{
		at = at + ((*(ss + y) - 48) * w);
		w /= 10;
	}
	return (at * pat);
}
