#include "main.h"

/**
 * slashChars- slach handlers
 * @c: char
 * Return: Nothing
*/

void slashChars(char c)
{
	if (c == 'n')
		write(1, "\n", 1);
	else if (c == 'r')
		write(1, "\r", 1);
	else if (c == 'a')
		write(1, "\a", 1);
	else if (c == 'b')
		write(1, "\b", 1);
	else if (c == 't')
		write(1, "\t", 1);
	else if (c == 'f')
		write(1, "\f", 1);
}

/**
 * handle_bs - handles something
 * @c: string to handle
 * Return: return length of it
*/

int handle_bs(char c)
{
	int charPrinted;

	if (c == '0')
	{
		write(1, "\0", 1);
	}
	else if ('\\')
	{
		charPrinted = write(1, "\\", 1);
	}
	else if ('\'')
	{
		charPrinted = write(1, "\'", 1);
	}
	else if ('\"')
	{
		charPrinted = write(1, "\"", 1);
	}

	slashChars(c);

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

	return (charPrinted);
}

/**
 * _printf - printing main function
 * @format: string to handle
 * Return: print the str and return length of it
*/

int _printf(const char *format, ...)
{
	int charPrinted, printedLen = 0;
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			charPrinted = handle_prc(*format, args);
		}
		else if (*format == '\\')
		{
			format++;
			charPrinted = handle_bs(*format);
		}
		else
		{
			charPrinted = write(1, format, 1);
		}

			printedLen += charPrinted;
			format++;
	}

	va_end(args);
	return (printedLen);
}
