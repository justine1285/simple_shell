#include "simpleshell.h"
/**
 * subValue - replaces a pattern value
 * @myform: struct parameter
 * @index: positioning
 * @strg: enter string
 * Return: pointer to string
 */
char *subValue(simpleshell_t *myform, int *index, char *strg)
{
	char *wall;
	int k, os, ns;

	k = *index;
	k++;

	wall = ex_change(myform, index, strg + k);
	if (wall == NULL)
	{
		strg = str_cpys(strg, "");

		return (strg);
		;
	}

	os = str_lenz(strg);
	ns = str_lenz(wall) + 1;
	strg = its_realloc(strg, os, ns);
	strg = str_cpys(strg, wall);

	rmem(wall);
	*index = k;

	return (strg);
}
