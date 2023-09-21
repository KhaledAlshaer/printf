#include "main.h"

/**
 * handle_b- binary to decimal
 * @args: the args
 * Return: decimal
*/

int handle_b(va_list args)
{
	unsigned int num = va_arg(args, unsigned int), temp = num;
	int len = 0, i = 0;
	char *binary;

	while (temp)
	{
		len++;
		temp /= 2;
	}

	binary = malloc(sizeof(char) * (len + 1));

	if (binary == NULL)
	{
		return (-1);
	}

	while (num)
	{
		binary[i++] = (num % 2) + '0';
		num /= 2;
	}

	binary[i] = '\0';

	revString(binary, 0, i - 1);

	_puts(binary);

	return (len);
}
