#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct convert - defines a structure for symbols and function
 *
 * @sym: The operator
 * @f: The function associated
 */

struct convert
{
	char *sym;
	int (*f)(va_list);
};
typedef struct convert conver_t;

int _printf(const char *format, ...);
int parser(const char *format, conver_t f_list[], va_list arg_list);
int _putchar(const char c);

/**
 * function specifiers
 */

int print_char(va_list list);
int print_percent(__attribute__((unused))va_list list);
int print_string(va_list list);

#endif
