#include "main.h"

/**
 * _printf_binary - Function that prints a binary number
 * @format: Function Argument
 * Return: binary number
 */
int _printf_binary(const char *format, ...)
{
	unsigned int num1;

	int n = 0, count = 0;

	va_list args;

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) == 'b')
		{
			num1 = va_arg(args, unsigned int);
			while (num1 > 0)
			{
				_putchar('0' + num1 % 2);
				n /= 2;
				count++;
			}
			n += count;
			format += 2;
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
