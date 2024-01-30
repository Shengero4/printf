#include "main.h"

void print_octal(unsigned int n, int *count) 
{
	int octal[32];
	int i = 0;
	int j;
	if (n == 0)
	{
		_putchar('0', count);
		return;
	}

    while (n > 0) {
        octal[i] = n % 8;
        n /= 8;
        i++;
    }

    for (j = i - 1; j >= 0; j--) {
        _putchar(octal[j] + '0', count);
    }
}

