#include "main.h"

void    _putchar(char c, int *count)
{
	write(1, &c, 1);
	*count += 1;
}
