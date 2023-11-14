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
<<<<<<< HEAD
int _printf_binary(unsigned int num, int x);
int _printf_int(va_list args, int x);
int _printf_hexadecimal(const char *format, ...);
int _printf_unsigned_int(const char *ptr, ...);
int _printf_ocat_int(const char *format, ...);
=======
int _printf_binary(const char *format, ...);
int _printf_int(const char *format, int num);
int _printf_buffer(const char *format, ...);
int _printf_str_hexa(const char *format, ...);


>>>>>>> 4f11020cb03023e8d57c23ec032072af0ea6a79e
#endif
