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
int _printf_binary(const char *format, ...);
int _printf_int(const char *format, int num);
int _printf_buffer(const char *format, ...);
int _printf_str_hexa(const char *format, ...);


#endif
