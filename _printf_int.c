#include "main.h"
#include <stdio.h>

/**
 * _printf_int - function that prints integer number
 * @args: Function Argument 1
 * @x: Function Argument 2
 * Return: Integer number
 */
int _printf_int(va_list args, int x)
{
	int num = va_arg(args, int);
	int num1 = 0;
	int temp = num;
	int num2;
	int pow10 = 1;
	int i = 1;

	if (num < 0)
	{
		x += _putchar('-');
		num = -num;
		temp = num;
	}
	while (temp != 0)
	{
		num1++;
		temp /= 10;
	}
	while (num1 > 0)
	{
		while (i < num1)
		{
			pow10 *= 10;
			i++;
		}
		num2 = num / pow10;
		x += _putchar(num2 + '0');
		num -= num2 * pow10;
		num1--;
	}
	return (x);
}
