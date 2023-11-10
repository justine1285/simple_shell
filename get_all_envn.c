#include "simpleshell.h"
/**
 * getAllEnvn - program to get all environment variables
 * Return: nothing
 */
void getAllEnvn(void)
{
	int z;
	char **snow;

	z = 0;
	for (z = 0, snow = environ; snow[z] != NULL; z++)
	{
		display_msg(snow[z]);
		writeChars('\n');
	}
}
