#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int handle_di(va_list);
int handle_percent(va_list);
int handle_c(va_list);
int handle_s(va_list);

#endif
