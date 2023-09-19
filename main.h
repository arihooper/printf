#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int _put_char(char s);
int _printf(const char *format, ...);
int print_number(va_list n);
int print_str(va_list s);
int _strlen(const char *s);
int _strcmp(const char *s, const char *t);
int (*util_func(const char a))(va_list);
int print_char(va_list arr);
int print_binary(va_list arr);
int print_unsigned(va_list n);

/**
 * struct types - specifier structure for printf
 * @p: pointer to characteres specifiers
 * @func : function pointer to print fucntions
 */

typedef struct types
{
	char p;
	int (*func)(va_list);
} my_printf;

#endif /* MAIN_H */
