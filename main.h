#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct specifiers_struct - struct for specifiers
 * @flag: format specifier
 * @f: format function
*/

typedef struct specifiers_struct
{
	char *flag;
	int (*f)(va_list);
} specifiers;

int _putchar(char c);
int _puts(char *str);
int _strlen(char *str);
int printable(char c);

int isFormatValid(const char *format);

int handle_c(va_list args);
int handle_s(va_list args);
int handle_percent(va_list args);

int handle_di(va_list args);


int printf_helper(char c, va_list args);
int _printf(const char *format, ...);

#endif

