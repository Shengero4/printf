#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

void	_putchar(char c, int *count);
void	_putstr(char *str, int *count);
void	_putnbr(int n, int *count);
void	_putnbr_u(unsigned int n, int *count);
int	_printf(const char *formart, ...);

#endif
