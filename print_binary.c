#include "main.h"

void print_binary(unsigned int n, int *count) 
{
	int binary[32];
	int i = 0;
	int j;
	if (n == 0) 
	{
		_putchar('0', count);
		return;
	}


    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i++;
    }

    for (j = i - 1; j >= 0; j--) {
        _putchar(binary[j] + '0', count);
    }
}

