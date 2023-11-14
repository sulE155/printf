#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _printf_percentage(const char *format, ...);
int _printf_string(const char *format, const char *s);
int _putchar(char ch);
int _printf_binary(unsigned int num, int x);
int _printf_int(va_list args, int x);
#endif
