#include "main.h"

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
			if (*format == 'n')
			{
				charPrinted = write(1, "\n", 1);
			}
			else if (*format == 't')
			{
				charPrinted = write(1, "\t", 1);
			}
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
