#include "main.h"

/**
 * parser - receives necessary parameters to format a formatted string
 *
 * @format: contains all the desired characters
 * @f_list: A list of all the possible funcitons.
 * @arg_list: A list of all the arguments passed to the program
 *
 * Return: count of character printed
 */

int parser(const char *format, conver_t f_list[], va_list arg_list)
{
	int j, i, r_val, printed_chars;

	printed_chars = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; f_list[j].sym != NULL; j++)
			{
				if (format[i + 1] == f_list[j].sym[0])
				{
					r_val = f_list[j].f(arg_list);
					if (r_val == -1)
						return (-1);
					printed_chars += r_val;
					break;
				}
			}
			if (f_list[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					printed_chars += 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			printed_chars++;
		}
	}
	return (printed_chars);
}
