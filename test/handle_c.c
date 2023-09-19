#include "main.h"

/**
 * handle_c - print char
 * @args: this is a variable
 * Return: print char and return g
*/

int handle_c(va_list args)
{
	char c = va_arg(args, int);
	int len;

	if (c < 0 || (unsigned char)c > 127)
		len = _putchar('?');
	else
		len = _putchar(c);

	return (len);
}
