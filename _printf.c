#include "main.h"

/**
 * _printf - printing main function
 * @format: string to handle
 * Return: print the str and return length of it
*/

int _printf(const char *format, ...)
{
	int printingCounter, printedLength = 0;
	va_list args;

	va_start(args, format);

	isFormatValid(format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			printingCounter = printf_one(*format, args);
		}
		else if (*format == '\\')
		{
			format++;
			printingCounter = printf_two(*format);
		}
		else
		{
			printingCounter = _putchar(*format);
		}

		printedLength += printingCounter;
		format++;
	}

	va_end(args);
	return (printedLength);
}
