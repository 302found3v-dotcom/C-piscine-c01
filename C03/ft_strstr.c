/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreyes-s <jreyes-s@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 22:11:24 by jreyes-s          #+#    #+#             */
/*   Updated: 2025/11/14 22:11:27 by jreyes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(char *str, char *to_find)
{
    int i;
    int j;

    if (!to_find[0])
        return (str);
    i = 0;
    while (str[i])
    {
        j = 0;
        while (to_find[j] && str[i + j] == to_find[j])
        {
            if (!to_find[j])
                return (str + i);
            j++;
        }
        i++;
    }
    return (NULL);
}
