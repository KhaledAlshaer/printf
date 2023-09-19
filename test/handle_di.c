#include "main.h"

/**
 * revString - rev the string
 * @str: the string
 * @startIdx: first number
 * @endIdx: last number
 * Return: Nothing
*/

void revString(char *str, int start, int end)
{
	char temp;

	while (start < end)
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

/**
 * handle_di - handling num
 * @args: the number
 * Return: the length and print the number
*/

int handle_di(va_list args)
{
	int number = va_arg(args, int);
	int counter = 0, isNegative = 0, temp, i;
	char str[20];

	if (number < 0)
	{
		isNegative = 1;
		number = -number;
	}

	temp = number;
	do {
		counter++;
		temp /= 10;
	} while (temp > 0);

	i = 0;
	if (isNegative)
	{
		str[i++] = '-';
	}

	do {
		str[i++] = (char)((number % 10) + '0');
		number /= 10;
	} while (number > 0);

	str[i] = '\0';

	revString(str, isNegative, i - 1);

	return (_puts(str));
}
