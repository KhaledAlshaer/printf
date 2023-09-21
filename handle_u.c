#include "main.h"

/**
 * handle_u - handling unsigned int
 * @args: the arguments
 * Return: the length and print the uint
*/

int handle_u(va_list args)
{
	unsigned int number = va_arg(args, unsigned int), temp = number;
	int len = 0, i = 0;
	char *buffer;

	while (temp)
	{
		len++;
		temp /= 10;
	}

	buffer = malloc(sizeof(char) * (len + 1));

	if (buffer == NULL)
	{
		return (-1);
	}

	while (number)
	{
		buffer[i++] = (number % 10) + '0';
		number /= 10;
	}

	buffer[i] = '\0';

	revString(buffer, 0, i - 1);

	_puts(buffer);

	return (len);

}
