/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreyes-s <jreyes-s@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 12:59:13 by jreyes-s          #+#    #+#             */
/*   Updated: 2025/11/21 13:00:24 by jreyes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		while (base[j] != '\0')
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

int	ft_index(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_possible_chars(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	sign;
	int	base_len;
	int	index_value;

	res = 0;
	sign = 1;
	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	if (!ft_check_base(base))
		return (0);
	while (ft_possible_chars(*str) || *str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str != '\0')
	{
		index_value = ft_index(*str, base);
		if (index_value == -1)
			break ;
		res = (res * base_len) + index_value;
		str++;
	}
	return (res * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	func;

	if (argc > 1)
	{
		func = ft_atoi_base(argv[1], argv[2]);
		printf("%d\n", func);
	}
	return (0);
}*/
