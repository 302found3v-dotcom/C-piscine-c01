/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jreyes-s <jreyes-s@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:13:53 by jreyes-s          #+#    #+#             */
/*   Updated: 2025/11/09 17:18:07 by jreyes-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a) / (b);
	*mod = (a) % (b);
}
/*
int main(void)
{
  int dv;
  int md;
  int a;
  int b;

  ft_div_mod(5, 5, &dv, &md);
  return (0);
}*/
