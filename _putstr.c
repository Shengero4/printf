#include "main.h"

void	_putstr(char *str, int *count)
{
	if (!str)
	{
		*count += write(1, "(null)", 6);
	}
	else
	{
		while (*str)
		{
			_putchar(*str, count);
			str++;
		}
	}
}
