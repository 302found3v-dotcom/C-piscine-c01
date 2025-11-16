/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreyes-s <jreyes-s@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 02:06:22 by jreyes-s          #+#    #+#             */
/*   Updated: 2025/11/16 02:56:29 by jreyes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int    check_ft_putnbr_base(char *base)
{
    int j;
    int i;

    i = 0;
    while (base[i] != '\0')
    {
        if (base[i] == '-' || base[i] == '+')
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
    if (i < 2)
        return (0);
    return (1);
}

void    ft_putnbr_base(int nbr, char *base)
{
    int len;

    len = 0;
    if (check_ft_putnbr_base(base))
    {
        while (base[len])
            len++;
        if (nbr < 0)
        {
            ft_putchar('-');
            nbr = -nbr;
        }
        if (nbr >= len)
            ft_putnbr_base(nbr / len, base);
        ft_putchar(base[nbr % len]);
    }
    return;
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
        int nbr = atoi(argv[1]);
	    ft_putnbr_base(nbr, argv[2]);
	}
	return (0);
}*/
