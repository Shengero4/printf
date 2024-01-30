#include "main.h"

void	handle_formats(const char c, va_list args, int *count)
{
	if (c == 'c')
		_putchar(va_arg(args, int), count);
	else if (c == 's')
		_putstr(va_arg(args, char *), count);
	else if (c == 'd' || c == 'i')
		_putnbr(va_arg(args, int), count);
	else if (c == 'u')
		_putnbr_u(va_arg(args, unsigned int), count);
	else if (c == '%')
		_putchar('%', count);
	else if (c == 'x')
		_puthex(va_arg(args, unsigned int), SYMBOLS_HEX_LOWER, count);
	else if (c == 'X')
		_puthex(va_arg(args, unsigned int), SYMBOLS_HEX, count);
	else if (c == 'p')
		print_pointer(va_arg(args, void *), count);
	else if (c == 'b')
		print_binary(va_arg(args, unsigned int), count);

	else if (c == 'o')
		print_octal(va_arg(args, unsigned int), count);
	else if (c == 'S')
		print_string_special(va_arg(args, char *), count);
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
		{
			_putchar(*format, &count);
		}
		format++;
	}
	va_end(args);
	return (count);
}

