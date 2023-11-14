#include "main.h"

/**
 * _printf_binary - Function that prints a binary number
 * @num: Function Argument
 * @x: Function argument
 * Return: binary number
 */
int _printf_binary(unsigned int num, int x)
{
	int binary[32] = {0};
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		x++;
		return (x);
	}
	if (num > 0)
	{
		do {
			binary[i] = num % 2;
			num /= 2;
			i++;
		} while (num > 0);
	}
	if (i > 0)
	{
		do {
			i--;
			_putchar('0' + binary[i]);
			x++;
		} while (i > 0);
	}
	return (x);
}
