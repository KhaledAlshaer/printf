#include "main.h"

/**
 * handle_o - handling octal
 * @args: the arguments
 * Return: the length and print the uint
*/

int handle_o(va_list args)
{
	int number = va_arg(args, int), temp = number;
	int len = 0, i = 0;
	char *buffer;

	while (temp)
	{
		len++;
		temp /= 8;
	}

	buffer = malloc(sizeof(char) * (len + 1));

	if (buffer == NULL)
	{
		return (-1);
	}

	while (number)
	{
		buffer[i++] = (number % 8) + '0';
		number /= 8;
	}

	buffer[i] = '\0';

	revString(buffer, 0, i - 1);

	_puts(buffer);

	return (len);

}
