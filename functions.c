#include "main.h"

/**
 * printf_one - help printf to print args
 * @c: the specifier
 * @args: the arguments
 * Return: invoke function and return number of char
*/

int printf_one(char c, va_list args)
{
	int i = 0;

	specifiers specs[] = {
		{"c", handle_c,}, {"s", handle_s},
		{"%", handle_percent}, {"d", handle_di},
		{"i", handle_di}, {NULL, NULL}
	};

	while (specs[i].flag)
	{
		if (specs[i].flag[0] == c)
		{
			return (specs[i].f(args));
		}
		i++;
	}

	perror("_printf");
	va_end(args);
	return (-1);
}

/**
 * printf_two- printing what's after slash
 * @c: the char
 * Return: returns length and print
*/

int printf_two(char c)
{
	int printingCounter;

	switch (c)
	{
		case 'n':
			printingCounter = _putchar('\n');
			break;

		case '\\':
			printingCounter = _putchar('\\');
			break;

		case 't':
			printingCounter = _putchar('\t');
			break;

		default:
			perror("_printf");
			return (-1);
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
