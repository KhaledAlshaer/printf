#include "main.h"

/**
 * handle_s - printing string
 * @args:this is a variable
 * Return: length of str
*/

int handle_s(va_list args)
{
	int len, printedLen = 0, i = 0;
	char current;
	char *str = va_arg(args, char*);

	if (str == NULL)
		str = "(null)";

	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}

	while (i < len)
	{
		current = str[i];
		printedLen += write(1, &current, 1);
		i++;
	}

	return (printedLen);
}
