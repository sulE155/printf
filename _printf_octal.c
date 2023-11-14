#include "main.h"

/**
 * _printf_ocat_int - Print octal integer
 * @format: Function argument
 * Return: printed character
 */
int _printf_ocat_int(const char *format, ...)
{
	int octal_num;

	int count = 0;

	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) == '0')
		{
			octal_num = va_arg(args, int);
			count += printf("%0", octal_num);
			format += 2;
		}
		else
		{
			_putchar(*format);
			count++;
			format++;
		}
	}
	va_end(args);
	return (count);
}
