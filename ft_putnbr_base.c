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

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    check_ft_putnbr_base(char *base)
{
    int j;
    int i;

    i = 0;
    while (base[i])
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
    
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		;
	}
	return (0);
}
