/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreyes-s <jreyes-s@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 07:41:52 by jreyes-s          #+#    #+#             */
/*   Updated: 2025/11/21 13:43:54 by jreyes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	is_num(char c)
{
	return (c >= '0' && c <= '9');
}

char	*ft_strcapitalize(char *str)
{
	int	new_word;
	int	i;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]) || is_num(str[i]))
		{
			if (new_word && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			else if (!new_word && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "salut, vas ? 42mots quara-deux; cinque+et+un";
	char	*func;

	func = ft_strcapitalize(str);
	printf("%s\n", func);
	return (0);
}
