#include "main.h"

/**
 * _putchar - print char
 * @c: the char agr
 * Return: 1 Success , -1 fail
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - return the length
 * @str: the string
 * Return: the length
*/

int _puts(char *str)
{
	int len = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		len++;
	}

	return (len);
}

/**
 * _strlen - get the length
 * @str: the string
 * Return: return the length
*/

int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;

	return (length);
}

/**
 * revString - rev the string
 * @str: the string
 * @start: first number
 * @end: last number
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
