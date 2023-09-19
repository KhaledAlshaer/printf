#include "main.h"

/**
 * handle_s - printing string
 * @args:this is a variable
 * Return: length of str
*/

int handle_s(va_list args)
{
	int len;
	char *str = va_arg(args, char *);

		if (str == NULL)
			return (-1);


		for (len = 0; str[len] != '\0'; len++)
		{
			;
		}

		len = _puts(str);


		return (len);
}
