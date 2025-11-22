/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreyes-s <jreyes-s@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:14:34 by jreyes-s          #+#    #+#             */
/*   Updated: 2025/11/09 17:28:24 by jreyes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if (nb >= 10)
        ft_putnbr(nb / 10);
    ft_putchar((nb % 10) + '0');
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

int main(void)
{
  int arr[] = {1, 2, 3, 4, 5};
  int size = 5;
  int i;

  ft_rev_int_tab(arr, size);

  i = 0;
  while (i < size)
  {
    ft_putnbr(arr[i]);
    i++;
  }

  return (0);
}
