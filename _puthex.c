#include "main.h"

void	_puthex(unsigned int nb, char *base, int *count)
{
	if (nb > 15)
		_puthex(nb / 16, base, count);
	_putchar(base[nb % 16], count);
}

