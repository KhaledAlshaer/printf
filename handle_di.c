#include "main.h"

/**
 * _numLength - calc length
 * @num: number to calc
 * Return: length
*/

int _numLength(int num)
{
	int len = 0;

	while (num != 0)
	{
		num /= 10;
		len++;
	}

	return (len);
}

/**
 * _numToStr - convert num to str
 * @str: the buffer
 * @num: the number
 * @numLen: the num length
 * Return: Nothing
*/

void _numToStr(char *str, int num, int numLen)
{
	char numToC;
	int flag = 0;

	if (num < 0)
	{
		num *= -1;
		flag = 1;
	}

	str[numLen] = '\0';
	while (num != 0)
	{
		numLen--;
		numToC = (num % 10) + '0';
		str[numLen] = numToC;
		num /= 10;
	}

	if (flag)
	{
		numLen--;
		str[0] = '-';
	}
}

/**
 * handle_di - Handling %d %i
 * @args: this is a variable
 * Return: Print the numb & return the size of it
*/

int handle_di(va_list args)
{
	int num = va_arg(args, int), numLen, printedLen;
	char *str;

	numLen = _numLength(num);

	if (num < 0)
		numLen += 1;

	str = malloc(sizeof(char) * (numLen + 1));

	if (str == NULL)
	{
		free(str);
		return (1);
	}

	_numToStr(str, num, numLen);

	printedLen = write(1, str, numLen);
	free(str);
	return (printedLen);
}
