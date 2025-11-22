/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreyes-s <jreyes-s@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:14:44 by jreyes-s          #+#    #+#             */
/*   Updated: 2025/11/09 17:35:08 by jreyes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void  ft_putchar(char c)
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
*/
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int main(void)
{
  int arr[] = {1, 25, 8, 238, 6};
  int size = 5;
  int i;

  ft_sort_int_tab(arr, size);

  i = 0;
  while (i < size)
  {
    ft_putnbr(arr[i]);
    if (i != size - 1)
    {
      ft_putchar(',');
      ft_putchar(' ');
    }
    i++;
  }
  ft_putchar('\n');

  return (0);
}*/
