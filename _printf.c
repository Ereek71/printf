#include "main.h"

/**
 * _printf - Recieves a main string and formats it if necessary
 * @format: a string containing characters
 *
 * Return: A total count of the characters
 */

int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}

	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);

	return (printed_chars);
}
