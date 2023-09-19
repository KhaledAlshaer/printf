#include "main.h"

/**
 * printf_helper - help printf to print args
 * @c: the specifier
 * @args: the arguments
 * Return: invoke function and return number of char
*/

int printf_helper(char c, va_list args)
{
	int i = 0, printingCounter;

	specifiers specs[] = {
		{"c", handle_c,}, {"s", handle_s},
		{"%", handle_percent}, {"d", handle_di},
		{"i", handle_di}, {NULL, NULL}
	};

	while (specs[i].flag != NULL)
	{
		if (specs[i].flag[0] == c)
		{
			printingCounter = (specs[i].f(args));
		}
		i++;
	}
	return (printingCounter);
}

/**
 * isFormatValid - check validation
 * @format: the string
 * Return: -1 if not
*/

int isFormatValid(const char *format)
{
	if (format[0] == '%' && format[1] == ' ' && format[2] == '\0')
		return (-1);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	return (1);
}
