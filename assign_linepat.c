#include "simpleshell.h"
/**
 * assign_linepat - reassigns the linepat variable for get_line
 * @linepat: a buffer to store an input string
 * @num: the size of linepat
 * @buffer: the string to assign to linepat
 * @b: size of buffer
 */
void assign_linepat(char **linepat, size_t *num, char *buffer, size_t b)
{
	if (*linepat == NULL)
	{
		if (b > 120)
			*num = b;
		else
			*num = 120;
		*linepat = buffer;
	}
	else if (*num < b)
	{
		if (b > 120)
			*num = b;
		else
			*num = 120;
		*linepat = buffer;
	}
	else
	{
		str_cpys(*linepat, buffer);
		free(buffer);
	}
}
