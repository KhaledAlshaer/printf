#include "main.h"

/**
 * handle_di - handling num
 * @args: the number
 * Return: the length and print the number
*/

int handle_di(va_list args)
{
	int number = va_arg(args, int);
	int isNegative = 0, i = 0;
	char str[20];

	if (number == 0)
	{
		str[i++] = '0';
	}
	else if (number == INT_MIN)
	{
		return (_puts("-2147483648"));
	}
	else if (number < 0)
	{
		isNegative = 1;
		number = -number;
		str[i++] = '-';
	}

	while (number != 0)
	{
		str[i++] = (number % 10) + '0';
		number /= 10;
	}

	str[i] = '\0';

	revString(str, isNegative, i - 1);

	_puts(str);

	return (i);
}
