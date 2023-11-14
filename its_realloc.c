#include "simpleshell.h"
/**
 * its_realloc - to reallocate memory
 * @potr: pointer allocated to old memory
 * @os: old size of the memory
 * @ns: newly allocated size
 * Return: void pointer to new memory
 */
void *its_realloc(void *potr, unsigned int os, unsigned int ns)
{
	char *exptr = potr, *p;
	unsigned int y, pen = ns;

	if (potr == NULL)
	{
		p = malloc(ns);
		return (p);
	}
	else if (ns == 0)
	{
		free(potr);
		return (NULL);
	}
	else if (ns == os)
		return (potr);

	p = malloc(ns);
	if (p == NULL)
		return (NULL);
	if (ns > os)
		pen = os;
	for (y = 0; y < pen; y++)
		p[y] = exptr[y];
	free(potr);
	return (p);
}
