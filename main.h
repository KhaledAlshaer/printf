#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <limits.h>

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
void revString(char *string, int start, int end);

void slashChars(char c);
int handle_bs(char c);
int handle_prc(char c, va_list args);

int isFormatValid(const char *format);

int handle_c(va_list args);
int handle_s(va_list args);
int handle_percent(va_list args);
int handle_specials(va_list args);

int handle_di(va_list args);

int handle_b(va_list args);

int handle_u(va_list args);
int handle_o(va_list args);
int handle_x(va_list args);
int handle_X(va_list args);

int printf_one(char c, va_list args);
int printf_two(char c);
int _printf(const char *format, ...);

#endif

