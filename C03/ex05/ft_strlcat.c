/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreyes-s <jreyes-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 14:35:35 by jreyes-s          #+#    #+#             */
/*   Updated: 2025/11/17 14:18:00 by jreyes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	src_len;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
		len++;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size <= len)
		return (size + src_len);
	while (len + i < size - 1 && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (len + src_len);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*src = ": Hello World";
	char	dest[] = "Este es mi espacio";
	int func = ft_strlcat(dest, src, 32);
	printf("%d\n", func);
	printf("%s\n", dest);
	return (0);
}*/
