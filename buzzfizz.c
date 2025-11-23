/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buzzfizz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreyes-s <jreyes-s@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 04:07:42 by jreyes-s          #+#    #+#             */
/*   Updated: 2025/11/23 00:12:11 by jreyes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr(int nbr)
{
    char    c;
    if (nbr >= 10)
        ft_putnbr(nbr / 10);
    c = (nbr % 10) + '0';
    write(1, &c, 1);
}

void    ft_buzzfizz(void)
{
    int n;

    n = 1;
    while (n <= 100)
    {
		if (n % 4 == 0 && n % 7 == 0)
			write(1, "BuzzFizz\n", 9);
		else if (n % 4 == 0)
            write(1, "Buzz\n", 5);
        else if (n % 7 == 0)
            write(1, "Fizz\n", 5);
		else
		{
			ft_putnbr(n);
			write(1, "\n", 1);
		}
        n++;
    }
}

int main(void)
{
    ft_buzzfizz();
    return (0);
}
