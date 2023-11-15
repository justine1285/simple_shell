#include "simpleshell.h"
#include "shell.h"
/**
 * work - receives command in the child process
 * @cmmd: receives execution command
 * @aarg: receives arguments
 * @buffer: line created
 * @myform: struct
 * Return: nothing
 */
void work(char *cmmd, char **aarg, simpleshell_t *myform, char *buffer)
{
	int position;
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		execve(cmmd, aarg, environ);
		perror("./sh");

		rmem_pointer((void *) aarg);

		if (myform->cmmd_path != NULL)
		{
			free(myform->cmmd_path);
			myform->cmmd_path = NULL;
		}

		free(myform);
		free(buffer);
		exit(1);
	}
	else if (pid > 0)
	{
		waitpid(pid, &position, 0);
		if (WIFEXITED(position))
		{
			myform->code_status = WEXITSTATUS(position);
		}
	}
}
