#include "main.h"

/**
 * handle_percent - print %
 * @args: this is a variable
 * Return: Nothing
*/

int handle_percent(__attribute__((unused)) va_list args)
{
	char percent = '%';
	int len;

	len = write(1, &percent, 1);

	return (len);
}
