#include "main.h"

/**
 * _printf_int - function that prints integer number
 * @format: Function Argument 1
 * @num: Function Argument 2
 * Return: Integer number
 */
int _printf_int(const char *format, int num)
{
	int num1 = 0;

	while (*format != '\0')
	{
		if (*format == '%' &&
(*(format + 1) == 'd' || *(format + 1) == 'i'))
		{
			printf("%d", num);
			num1++;
			format += 2;
		}
		else
		{
			_putchar(*format);
			num1++;
			format++;
		}
	}
	return (num1);
}
