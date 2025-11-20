#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_is_invalid_char(char c)
{
    return((c == '-' || c == '+'));
}

int ft_check_base(char *base)
{
    int i;
    int j;

    i = 0;
    while (base[i])
    {
        if (!ft_is_invalid_char(base[i]))
            return (0);
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        i++;
    }
    return (i >= 2);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int len;

    len = 0;
    while (base[len] != '\0')
    {
        len++;
    }
    if (nbr < 0)
    {
        ft_putchar('-');
        nbr = -nbr;
    }
    if (nbr >= len)
        ft_putnbr_base(nbr / len, base);
    ft_putchar(base[nbr % len]);
}

#include <stdlib.h>
int main(int argc, char **argv)
{
    if (argc > 1)
    {
        int n = atoi(argv[1]);
        ft_putnbr_base(n, argv[2]);
    }
    return (0);
}
