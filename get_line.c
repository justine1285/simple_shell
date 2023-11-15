#include "simpleshell.h"
#include "shell.h"
/**
 * get_line - reads input from a stream
 * @linepat: a buffer to store the input
 * @num: the size of linepat
 * @direction: the direction to read from
 * Return: the number of bytes read
 */
ssize_t get_line(char **linepat, size_t *num, FILE *direction)
{
	static ssize_t load;
	ssize_t set;
	char c = 'x', *buffer;
	int k;

	if (load == 0)
		fflush(direction);
	else
		return (-1);

	while (c != '\n')
	{
		k = read(STDIN_FILENO, &c, 1);
		if (k == -1 || (k == 0 && load == 0))
		{
			free(buffer);
			return (-1);
		}
		if (load >= 120)
			buffer = its_realloc(buffer, load, load + 1);

		buffer[load] = c;
		load++;
	}
	buffer[load] = '\0';

	assign_linepat(linepat, num, buffer, load);

	set = load;
	if (k != 0)
		load = 0;
	return (set);
}
