#include "simpleshell.h"
#include "shell.h"
/**
 * current_dir - program executes command if required
 * @commands: commands to be executed
 * @aarg: parameters to be commanded
 * @buff: buffer received
 * @myform: general info struct
 * Return: number equal to the status of program
 */
int current_dir(char *commands, char **aarg, char *buff, simpleshell_t *myform)
{
	if (myform->curr_path == 0)
	{
		return (0);
	}

	if (is_cmmd(commands) == 1)
	{
		work(commands, aarg, myform, buff);
		return (1);
	}

	return (0);
}
