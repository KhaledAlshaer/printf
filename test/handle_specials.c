#include "main.h"

int handle_specials(va_list args)
{
	if (format[i] == '\\')
	{
		ssize_t out;

		i++;
		if (format[i] == 'n')
		{
			out = write(1, "\n", 1);
		}
		else if (format[i] == 't')
		{
			out = write(1, "\t", 1);

		}
		else if (format[i] == '\\')
		{
			out = write(1, "\\", 1);
		}

		if (out == -1)
		{
			perror("_printf");
			va_end(args);
			return (-1);
		}
	}
	return (out);
}
