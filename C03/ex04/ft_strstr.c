/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreyes-s <jreyes-s@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 13:32:38 by jreyes-s          #+#    #+#             */
/*   Updated: 2025/11/19 18:20:02 by jreyes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	while (*to_find == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
int	main(void)
{
	char	*str = "Holala luci";
	char	*to_find = "la luci";

	char *func = ft_strstr(str, to_find);
	printf("%s\n", func);
	return (0);
}
