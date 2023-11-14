#include "main.h"

#define BUFFER_SIZE 1024

/**
 * _printf_buffer - buffer of 1024 chars in order to call
 * write as little as possible
 * @format: Function parameter
 * Return: Printed character
 */
int _printf_buffer(const char *format, ...)
{
	int octal_num;
        int count = 0;
        char buffer[BUFFER_SIZE];
        int buffer_index = 0;

	va_list args;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%' && *(format + 1) == 'o')
		{
			octal_num = va_arg(args, int);
			buffer_index += snprintf(buffer + buffer_index,
					BUFFER_SIZE - buffer_index, "%o", octal_num);
			if (buffer_index >= BUFFER_SIZE)
			{
				write(STDOUT_FILENO, buffer, buffer_index);
				buffer_index = 0;
			}
			format += 2;
		}
		else
		{
			if (buffer_index < BUFFER_SIZE - 1)
			{
				buffer[buffer_index++] = *format;
			}
			else
			{
				write(STDOUT_FILENO, buffer, buffer_index);
				buffer_index = 0;
				buffer[buffer_index++] = *format;
			}
			count++;
			format++;
		}
	}
	if (buffer_index > 0)
	{
		write(STDOUT_FILENO, buffer, buffer_index);
	}
	va_end(args);
	return (count);
}
