#include "main.h"

/**
 * _printf_ocat_int - Print octal integer
 * @format: Function argument
 * Return: printed character
 */
int _printf_ocat_int(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int octal_num;

	int count = 0;

	while (*format)
	{
		if (*format == '%' && *(format + 1) == '0')
		{
			octal_number = va_args(args, int);
			count += printf("%0", octal_number);
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
