#include "main.h"

/**
 * handle_c - print char
 * @args: this is a variable
 * Return: print char and return g
*/

int handle_c(va_list args)
{
	int len;
	char c = va_arg(args, int);

	if (c < 32 || (unsigned char)c > 127)
	{
		len = write(1, "?", 1);
	}
	else
	{
		len = write(1, &c, 1);
	}

	return (len);
}
