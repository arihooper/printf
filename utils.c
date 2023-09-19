#include "main.h"

/**
 * util_func - Returns a function pointer to a matching function.
 * @a: Character input.
 *
 * Return: Function pointer to a matching function, or 0 if no match is found.
 */

int (*util_func(const char a))(va_list)
{
	myprintf printf[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_number},
		{'b', print_binary},
		{'i',print_number},
		{'\0', NULL}
	};

	int i;

	for (i = 0; printf[i].p != '\0'; i++)
	{
		if (printf[i].p == a)
		{
			return (printf[i].func);
		}
	}

	return (0);
}
