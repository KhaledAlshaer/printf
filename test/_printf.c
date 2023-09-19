#include "main.h"

/**
 * _printf - printing main function
 * @format: string to handle
 * Return: print the str and return length of it
*/

int _printf(const char *format, ...)
{
	int i, byte_count = 0;
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
			}
			else if (format[i] == 's')
			{
			}
			else if (format[i] == 'd')
			{
			}
			else if (format[i] == 'i')
			{
			}
			else if (format[i] == '%')
			{
			}
		}
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
	}

	va_end(args);
	return (printedLength);
}
