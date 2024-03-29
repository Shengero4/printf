#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
# define SYMBOLS_HEX "0123456789ABCDEF"
# define SYMBOLS_HEX_LOWER "0123456789abcdef"
# define BUFFER_SIZE 1024

void	_putchar(char c, int *count);
void	print_string_special(const char *str, int *count);
void	_putstr(char *str, int *count);
void	_putnbr(int n, int *count);
void	_putnbr_u(unsigned int n, int *count);
void	_puthex(unsigned int n, char *base, int *count);
void	print_pointer(void *ptr, int *count);
void	print_binary(unsigned int n, int *count);
void	print_octal(unsigned int n, int *count);
int	_printf(const char *format, ...);

#endif

