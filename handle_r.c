#include "main.h"

/**
 * handle_r - printing string reversed
 * @args:this is a variable
 * Return: length of str
*/

int handle_r(va_list args)
{
	int len, printedLen = 0, i = 0;
	char current;
	char *str = va_arg(args, char*);

	if (str == NULL)
		return (-1);

	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}

	revString(str, 0, i - 1);

	while (i < len)
	{
		current = str[i];
		printedLen += write(1, &current, 1);
		i++;
	}

	return (printedLen);
}
