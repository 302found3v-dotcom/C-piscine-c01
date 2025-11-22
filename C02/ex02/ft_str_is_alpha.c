/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreyes-s <jreyes-s@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:58:40 by jreyes-s          #+#    #+#             */
/*   Updated: 2025/11/10 21:52:54 by jreyes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
*/
int	is_alphab(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (*str == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (is_alphab(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	int	value;
	char	*str;

	str = "HelloWorld";
	value = ft_str_is_alpha(str);
	printf("%d\n", value);
	return (0);
}*/
