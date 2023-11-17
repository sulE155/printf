#include "main.h"

/**
 * _pointer_pointer - print the address stored in the pointer
 * @format: Function parameter
 * Return: printed character
 */
int _pointer_pointer(const char *format, ...)
{
	void *ptr;

	int count = 0;

	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) == 'p')
		{
			ptr = va_arg(args, void*);
			_printf("%p", ptr);
			count += sizeof(void *) * 2;
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
