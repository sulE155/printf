#include "main.h"

/**
 * _printf_binary - Function that prints a binary number
 * @format: Function Argument
 * Return: binary number
 */
int _printf_binary(const char *format, ...)
{
	unsigned int

	int n = 0;

	va_list args;

	va_start(args, format);

	int num1 = 0;

	while (*format != '\0')
	{
		if (*format == '%' &&
*(format + 1) == 'b')
		{
			num = va_arg(args, unsigned int);
			while (num > 0)
			{
				_putchar('0' + num % 2);
				num /= 2;
				n++;
			}
			num1 += n;
			format += 2;
		}
		else
		{
			_putchar(*format);
			num1++;
			format++;
		}
	}
	va_end(args);
	return (num1);
}
