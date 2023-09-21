#include "main.h"

/**
 * handle_x - handling octal
 * @args: the arguments
 * Return: the length and print the uint
*/

int handle_x(va_list args)
{
	int number = va_arg(args, int), temp = number;
	int len = 0, i = 0, currentNum;
	char *buffer;

	while (temp)
	{
		len++;
		temp /= 16;
	}

	buffer = malloc(sizeof(char) * (len + 1));

	if (buffer == NULL)
	{
		return (-1);
	}

	while (number)
	{
		currentNum = number % 16;
		if (currentNum < 10)
			buffer[i++] = currentNum + '0';
		else if (currentNum >= 10)
			buffer[i++] = (currentNum - 10) + 'a';

		number /= 16;
	}

	buffer[i] = '\0';

	revString(buffer, 0, i - 1);

	_puts(buffer);

	return (len);

}
