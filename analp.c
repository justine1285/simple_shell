#include "simpleshell.h"
#include "shell.h"
/**
 * analP - function to analyze pattern
 * @myform: enter argument
 * @aarg: parameter to analyze
 * Return: nothing
 */
void analP(simpleshell_t *myform, char **aarg)
{
	int k;

	for (k = 0; aarg[k] != NULL; k++)
	{
		aarg[k] = hand_p(myform, aarg[k]);
	}
}
