#include "main"
/**
 * _printf_str_hexa - prints the string
 * @format: Function parameter
 * Return: printed character
 */
int _printf_str_hexa(const char *format, ...)
{
	va_list args;

	int count = 0;

	chat *str;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) == 'S')
		{
			*str = va_arg(args, char*);
			while (*str)
			{
				if (*str >= 32 && *str < 127)
				{
					_putchar(*str);
					count++;
				}
				else
				{
					count += 4;
				}
				str++;
			}
			format += 2;
		}
		else
		{
			_putchar(*format);
			count++;
			format++;
		}
	}
	va_end(args);
	return (count);
}
