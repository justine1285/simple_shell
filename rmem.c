#include "simpleshell.h"
#include "shell.h"
/**
 * rmem - program frees a pointer
 * @potr: pointer to be freed
 * Return: void
 */
void rmem(void *potr)
{
	if (potr != NULL)
	{
		free(potr);
		potr = NULL;
	}
	potr = NULL;
}
