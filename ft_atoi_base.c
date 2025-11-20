/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreyes-s <jreyes-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 12:45:52 by jreyes-s          #+#    #+#             */
/*   Updated: 2025/11/18 19:07:22 by jreyes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_possible_chars(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		if (base[i] == base[j])
			return (0);
		i++;
	}
	if (i < 2)
		return (0);
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;
	int	len;

	res = 0;
	sign = 1;
	while (*base)
		len++;
	return (str * sign);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_atoi_base(argv[1], argv[2]);
	return (0);
}
