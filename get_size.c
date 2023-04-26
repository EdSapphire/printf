#include "main.h"

/**
 * cal_size - This Calculates the size to cast the argument
 * @format: Formatted string that print the arguments
 * @n: List of arguments to be printed.
 *
 * Return: Size.
 */
int cal_size(const char *format, int *n)
{
	int curr_n = *n + 1;
	int size = 0;

	if (format[curr_n] == 'l')
		size = S_LONG;
	else if (format[curr_n] == 'h')
		size = S_SHORT;

	if (size == 0)
		*n = curr_n - 1;
	else
		*n = curr_n;

	return (size);
}
