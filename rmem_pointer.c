#include "simpleshell.h"
/**
 * rmem_pointer - program frees a pointer to a pointer
 * @potr: pointer of pointer to be freed
 * Return: no return
 */
void rmem_pointer(void **potr)
{
	void **snow;

	for (snow = potr; *snow != NULL; snow++)
	{
		rmem(*snow);
	}

	rmem(potr);
}
