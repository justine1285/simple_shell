#include "simpleshell.h"
#include "shell.h"
/**
 * par_prompt - this function uses the getline function to read
 * the line of the prompt
 * Description: handles the end of file initiated by ctrl D
 * Return: Buffer or NULL after freeing the read prompt
 */
char *par_prompt(void)
{
	char *buffer = NULL;
	int k;
	size_t z;

	k = getline(&buffer, &z, stdin);

	if (k == EOF)
	{
		rmem((void *) buffer);
		return (NULL);
	}

	return (buffer);
}
