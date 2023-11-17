#include "main.h"
/**
 * _printf_sign - print plus sign, space and Hash
 * @format: Function argument
 * Return: Printed character
 */
int _printf_sign(const char *format, ...)
{
	va_list args;
	const char *ptr = format;
	int count = 0;

	va_start(args, format);

	while (*ptr)
	{
		if (*ptr == '%' && (ptr[1] == '+' || ptr[1] == '#' || ptr[1] == ' '))
		{
			switch (ptr[1])
			{
				case '+':
				_putchar('+');
				break;
				case '#':
				_putchar('#');
				break;
				case' ':
				_putchar(' ');
				break;
				default:
				break;
			}
			count++;
			ptr += 2;
		}
	}
	va_end(args);
	return (count);
}
