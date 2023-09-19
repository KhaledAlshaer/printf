#include "main.h"

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
			if (*format == 'd' || *format == 'i')
			{
				charPrinted = handle_di(args);
			}
			else if (*format == '%')
			{
				charPrinted = handle_percent(args);
			}
			else if (*format == 'c')
			{
				charPrinted = handle_c(args);
			}
			else if (*format == 's')
			{
				charPrinted = handle_s(args);
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
