#include "simpleshell.h"
/**
 * hand_p- handles the pattern
 * @myform: struct argument
 * @alp: ptr to a string
 * Return: ptr to a string
 */
char *hand_p(simpleshell_t *myform, char *alp)
{
	int k;

	for (k = 0; alp[k] != '\0'; k++)
	{
		if (alp[k] == '$' && alp[k + 1] != '\0')
		{
			alp = subValue(myform, &k, alp);
		}
	}

	return (alp);
}
