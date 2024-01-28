#include "main.h"


void	handle_formats(const char c, va_list args, int *count)
{
	if (c == 'c')
		_putchar(va_arg(args, int), count);
	else if (c == 's')
		_putstr(va_arg(args, char *), count);
	else if (c == 'd' || c == 'i')
		_putnbr(va_arg(args, int), count);
	else
		_putchar(c, count);
}
int	_printf(const char *format, ...)
{
	va_list args;
	int	count;

	count = 0;
	va_start(args, format);
	if (write(1, "", 0) == -1)
		return (-1);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			format++;
			handle_formats(*format, args, &count);
		}
		else
			_putchar(*format, &count);
		format++;
	}
	va_end(args);
	return (count);
}
