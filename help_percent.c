#include "main.h"

/**
 * handle_uoxX - help handle_prc
 * @c: the char
 * @args: the arguments
 * Return: return 0 or 1
*/

int handle_uoxX(char c, va_list args)
{
	int charPrinted = 0;

	if (c == 'u')
		charPrinted = handle_u(args);
	else if (c == 'o')
		charPrinted = handle_o(args);
	else if (c == 'x')
		charPrinted = handle_x(args);
	else if (c == 'X')
		charPrinted = handle_X(args);
	else if (c == 'r')
		charPrinted = handle_r(args);

	return (charPrinted);
}

/**
 * handle_prc - handles something
 * @c: string to handle
 * @args: this is a variable
 * Return: return length of it
*/

int handle_prc(char c, va_list args)
{
	int charPrinted;

	if (c == 'd' || c == 'i')
	{
		charPrinted = handle_di(args);
	}
	else if (c == '%')
	{
		charPrinted = handle_percent(args);
	}
	else if (c == 'c')

	{
		charPrinted = handle_c(args);
	}
	else if (c == 's')
	{
		charPrinted = handle_s(args);
	}
	else if (c == 'b')
	{
		charPrinted = handle_b(args);
	}
	else if (c == 'u' || c == 'o' || c == 'x' || c == 'X' || c == 'r')
		charPrinted = handle_uoxX(c, args);
	else
	{
		charPrinted = write(1, "%", 1);
		charPrinted += write(1, &c, 1);
	}

	return (charPrinted);
}
