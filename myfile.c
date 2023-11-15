#include "simpleshell.h"
#include "shell.h"
/**
 * myfile - program checks if a name or path is a file or binary
 * @fname: file to check permission to run
 * Return: run file with right permission
 */
int myfile(char *fname)
{
	int k, z;

	z = str_lenz(fname);
	for (k = 0; k < z; k++)
		if (fname[k] == '/')
		{
			return (is_cmmd(fname));
		}
	return (-10);
}
