#include "main.h"

/**
 * _printf - printing main function
 * @format: string to handle
 * Return: print the str and return length of it
*/

int _printf(const char *format, ...)
{
	int counter, length = 0;
	va_list args;

	if (isFormatValid(format) == -1)
	{
		return (-1);
	}
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			counter = handle_prc(*format, args);
		}
		else if (*format == '\\')
		{
			format++;
			counter = handle_bs(*format);
		}
		else
		{
			counter = write(1, format, 1);
		}

			length += counter;
			format++;
	}

	va_end(args);
	return (length);
}
