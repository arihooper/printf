#include "main.h"

/**
 * print_binary - Print binary representation of a number
 *
 * @arr: argument to be checked
 * Return: integer
 */

int  print_binary(va_list arr)
{
	unsigned long int num = va_arg(arr, unsigned int);
	unsigned int i, rem, dup;
	char *string;
	char c;
	int len;

	dup = num;
	len = 0;
	while (num > 0)
	{
		len++;
		num /= 2;
	}
	string = malloc(sizeof(char) * len);
	if (string == NULL)
	{
		free(string);
		return (-1);
	}


	i = 0;
	while (dup > 0)
	{
		rem = dup % 2;
		c = rem + '0';
		string[i] = c;
		dup /= 2;
		i++;
	}
	while (len >= 0)
	{
		_put_char(string[len]);
		len--;
	}

	free(string);
	return (len);
}


/**
 * print_char - Entry function. for printing characters
 * @arr: variable va_list
 *
 * Return: 1 (nbyte)
 */
int print_char(va_list arr)
{
	_put_char(va_arg(arr, int));
	return (1);

}
