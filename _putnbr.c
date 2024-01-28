#include "main.h"

void	_putnbr(int n, int *count)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb *= -1;
		_putchar('-', count);
	}
	if (nb > 9)
		_putnbr(nb / 10, count);
	_putchar(nb % 10 + 48, count);
}

void	_putnbr_u(unsigned int n, int *count)
{
	if (n > 9)
		_putnbr_u(n / 10, count);
	_putchar(n % 10 + 48, count);
}

