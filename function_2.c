#include "main.h"


/**
 * print_number - prints number
 *
 * @n: number to be printed
 * Return: nBytes printed
 */

int print_number(va_list n)
{
	long int num = va_arg(n, int);
	char digit[10];
	int num_digits = 0;
	int counter = 0;

	if (num == 0)
	{
		_put_char('0');
		counter++;
		return (counter);
	}
	else if (num < 0)
	{
		_put_char('-');
		counter++;
		num = -1 * num;
	}
	while (num > 0)
	{
		digit[num_digits] = (num % 10) + '0';
		num /= 10;
		num_digits++;
	}
	while (num_digits > 0)
	{
		num_digits--;
		counter++;
		_put_char(digit[num_digits]);
	}
	return (counter);
}

/**
 * print_str - printed
 *
 * @s: string to be printed
 * Return: number of bytes printed
 */

int print_str(va_list s)
{
	char *str;
	int i;

	str = va_arg(s, char*);

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		_put_char(str[i]);
	}

	return (i);
}
