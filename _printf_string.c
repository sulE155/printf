#include "main.h"
/**
 * _printf_string - Function that print string
 * @format: Function parameter 1
 * @s: Function parameter 2
 * Return: Printed string
 */
int _printf_string(const char *format, const char *s)
{
	int count = 0;

	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (*(format + 1) == 's')
			{
				while (*s != '\0')
				{
					_putchar(*s);
					s++;
					count++;
				}
				format += 2;
				continue;
			}
		}
		_putchar(*format);
		format++;
		count++;
	}
	return (count);
}
