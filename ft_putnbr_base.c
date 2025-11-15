
int	ft_atoi(char *str)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*str == ' ' || *str >= 7 && *str <= 13)
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}
/*
void ft_putnbr_base(int nbr, char *base)
{
	;
}*/

#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		;
	}
	return (0);
}
