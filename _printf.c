#include "main.h"
/**
 * _printf_percentage - Function that prints percentage
 * @format: Function parameter
 * Return: Printed oercentage
 */
int _printf_percentage(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;

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
	va_end(args);
	return (coun)t;
}
