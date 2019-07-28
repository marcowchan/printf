#include "holberton.h"

/**
 * print_binary - prints an unsigned int as a binary number
 * @format: format to print the string
 * @args: va_list that contains an unsigned int to print
 * Return: number of characters printed
 */
int print_binary(char *format, va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char *binary;
	int i, size = sizeof(int) * 8, count = 0;
	(void)format;

	binary = malloc(size);
	if (!binary)
		return (-1);
	for (i = size - 1; i >= 0; i--)
	{
		binary[i] = num % 2 + '0';
		num /= 2;
	}
	for (i = 0; i < size && binary[i] == '0'; i++)
		;
	for (; i < size; i++)
	{
		_putchar(binary[i]);
		count++;
	}
	return (count);
}
