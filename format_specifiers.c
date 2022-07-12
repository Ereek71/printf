#include "main.h"

/**
 * print_char - function to print a character
 * @list: list of arguments
 *
 * Return: 1
 */

int print_char(va_list list)
{
	_putchar(va_arg(list, int));
	return (1);
}

/**
 * print_percent - function to print percentage sign
 *
 * @list: list of arguments
 *
 * Return: 1
 */

int print_percent(__attribute__((unused)) va_list list)
{
	_putchar('%');
	return (1);
}

/**
 * print_string - function to print a string
 * @list: list of arguments
 *  Return: 1
 */

int print_string(va_list list)
{
	int i;
	char *str;

	str = va_arg(list, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (1);
}
