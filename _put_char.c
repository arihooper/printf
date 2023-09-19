#include "main.h"
#include <unistd.h>


/**
 * _put_char - writes the character c to stdout
 * @s: the character to print
 *
 * Return: on success 1
 * On error, -1 is returned, and errno is set appropriately
 */

int _put_char(char s)
{
	return (write(1, &s, 1));
}
