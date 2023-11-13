#include "main.h"
/**
 * _printf_percentage - Function that prints percentage
 * @format: Function parameter
 * Return: Printed oercentage
 */
int _printf_percentage(const char *format, ...)
{
	int count = 0;

	va_list arg;

	va_start(arg, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			_putchar('%');
			count++;
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
