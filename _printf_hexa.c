#include "main.h"

/**
 * _printf - print hexadecimal integer (uppercase & lowercase)
 * @format: function argument
 * Return: uppercase and lowercase
 */
int _printf_hexadecimal(const char *format, ...)
{
	int x;
	int n = 0;

	va_list args;

	va_sart(args, format);

	while (*format != '\0')
	{
		if (*format == '%' && (*(format + 1) == 'X' || *(format + 1) == 'X'))
		{
			x = va_arg(args, int);
			if (*(format + 1) == 'X')
			{
				n + = printf("%X", value);
			}
			else
			{
				n + = printf("%x", value);
			}
			format + = 2;
		}
		else
		{
			_putchar(*format);
			n++;
			format++;
		}
	}
	va_end(args);
	return (n);
}
