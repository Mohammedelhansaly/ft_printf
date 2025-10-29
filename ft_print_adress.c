#include "libftprintf.h"

static size_t count_digit(int n)
{
    int len;

    len = (n <= 0);
    while (n)
    {
        n /= 10;
        len++;
    }
    return len;
}
void print_hex(unsigned long s, char *hex)
{
    if (s >= 16)
    {
        print_hex(s / 16, hex);
    }
    ft_print_char(hex[s % 16]);
}
int ft_print_adress(void *ptr)
{
    unsigned long s;
    char *hex;
    int count;

    s = (unsigned long)ptr;
    count = count_digit(s);

    hex = "0123456789abcdef";
    if (ptr == NULL)
        return write(1, "(nil)", 5);
    write(1, "0x", 2);
    if (s == 0)
    {
        ft_print_char('0');
    }
    else
    {
        print_hex(s, hex);
    }
    return count + 2;
}