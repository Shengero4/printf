#include "main.h"

static void	_puthex_addr(unsigned long n, char *base, int *count)
{
	if (n > 15)
		_puthex_addr(n / 16, base, count);
	_putchar(base[n % 16], count);
}

void	_putaddr(unsigned long n, int *count)
{
	_putstr("0x", count);
	if (n == 0)
	{
		_putchar('0', count);
		return;
	}
	_puthex_addr(n, SYMBOLS_HEX_LOWER, count);
}

