#include "simpleshell.h"
#include "shell.h"
/**
 * is_cmmd - function checks if file is an executable command
 * @path: the path of the file to check
 * Return: 1 if true, -1 otherwise
 */
int is_cmmd(char *path)
{
	struct stat st;

	if (stat(path, &st) == 0)
	{
		if (st.st_mode & X_OK)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		perror("stat");
		return (-10);
	}
}
