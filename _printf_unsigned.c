#include "main.h"

/**
 * _printf_unsigned_int - print unsigned decimal integer
 * @ptr: Function argument
 * Return: Printed character
 */
int _printf_unsigned_int(const char *ptr, ...)
{
	va_list args;

	va_start(args, ptr);

	unsigned int num;

	int count = 0;

	while (*ptr != '\0')
	{
		if (*ptr == 'u')
		{
			num = va_arg(args, unsigned int);
			count += _putchar("%u", num);
		}
		else
		{
			_putchar(*ptr);
			count++;
		}
		ptr++;
	}
	va_end(args);
	return (count);
}
