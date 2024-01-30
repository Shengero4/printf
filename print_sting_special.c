#include "main.h"

void print_string_special(const char *str, int *count) {
    if (str == NULL) {
        _putstr("(null)", count);
        return;
    }

    while (*str) {
        if (*str >= 32 && *str < 127) {
            _putchar(*str, count);
        } else {
            _putstr("\\x", count);
            if (*str < 16) {
                _putchar('0', count);
            }
            _puthex(*str, SYMBOLS_HEX, count);
        }
        str++;
    }
}

