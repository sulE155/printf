#include "main.h"
/**
 * _printf - Function that produces output according to a format
 * @format: Function parameter 1
 * @...: Function parameter 2
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int c;

	va_list arg;

	va_start(args, format);

	int Count = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(args, int);
				_putchar(c);
				Count++;
			}
		}
		else
		{
			_putchar(*format);
			Count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
