/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 09:28:36 by emmmilla          #+#    #+#             */
/*   Updated: 2025/11/09 10:40:15 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_line(int x, char start, char middle, char end)
{
	int	cols;

	cols = 0;
	if (x >= 1)
	{
		ft_putchar(start);
		cols++;
	}
	while (cols < x - 1)
	{
		ft_putchar(middle);
		cols++;
	}
	if (x >= 2)
		ft_putchar(end);
	if (x > 0)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int		rows;

	rows = 0;
	if (y >= 1)
	{
		ft_print_line(x, 'o', '-', 'o');
		rows++;
	}
	while (rows < y - 1)
	{
		ft_print_line(x, '|', ' ', '|');
		rows++;
	}
	if (y >= 2)
		ft_print_line(x, 'o', '-', 'o');
}
