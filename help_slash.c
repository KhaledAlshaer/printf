#include "main.h"

/**
 * slashChars- slach handlers
 * @c: char
 * Return: Nothing
*/

void slashChars(char c)
{
	if (c == 'n')
		write(1, "\n", 1);
	else if (c == 'r')
		write(1, "\r", 1);
	else if (c == 'a')
		write(1, "\a", 1);
	else if (c == 'b')
		write(1, "\b", 1);
	else if (c == 't')
		write(1, "\t", 1);
	else if (c == 'f')
		write(1, "\f", 1);
}

/**
 * handle_bs - handles something
 * @c: string to handle
 * Return: return length of it
*/

int handle_bs(char c)
{
	int charPrinted = 0;

	if (c == '0')
	{
		write(1, "\0", 1);
	}
	else if (c == '\\')
	{
		charPrinted = write(1, "\\", 1);
	}
	else if (c == '\'')
	{
		charPrinted = write(1, "\'", 1);
	}
	else if (c == '\"')
	{
		charPrinted = write(1, "\"", 1);
	}

	slashChars(c);

	return (charPrinted);
}
