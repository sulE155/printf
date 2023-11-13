#include "main.h"
/**
 * _putchar - prints/writes character
 * @ch: Function parameter
 * Return: 1, success, -1 error
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}
