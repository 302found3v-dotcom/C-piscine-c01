/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreyes-s <jreyes-s@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:14:04 by jreyes-s          #+#    #+#             */
/*   Updated: 2025/11/09 17:18:40 by jreyes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void  ft_putnbr(int nb)
{
  if (nb >= 10)
    ft_putnbr(nb / 10);
  char c = (nb % 10) + '0';
  write(1, &c, 1);
}*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rest;

	div = (*a) / (*b);
	rest = (*a) % (*b);
	*a = div;
	*b = rest;
}
/*
int main(void)
{
  int a = 8;
  int b = 59;

  ft_ultimate_div_mod(&a, &b);
  return (0);
}*/
