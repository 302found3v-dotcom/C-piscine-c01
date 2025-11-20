/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreyes-s <jreyes-s@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 06:07:12 by jreyes-s          #+#    #+#             */
/*   Updated: 2025/11/20 06:19:33 by jreyes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i < nb)
	{
		if ((i * i) == nb)
		{
			if (i % 2 != 0)
				return (0);
			break ;
		}
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main(void)
{
	int	func;

	func = ft_sqrt(49);
	printf("%d\n", func);
	return (0);
}
