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

	int count = 0;

	va_list arg;

	va_start(arg, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(arg, int);
				_putchar(c);
				count++;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(arg);
	return (count);
}
