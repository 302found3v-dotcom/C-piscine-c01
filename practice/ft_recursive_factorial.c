int ft_recursive_factorial(int nb)
{
  if (nb < 0)
    return (0);
  if (nb == 0 || nb == 1)
    return (1);
  return (nb * ft_recursive_factorial(nb - 1));
}

#include <stdio.h>

int main(void)
{
  int func = ft_recursive_factorial(7);
  printf("%d\n", func);
  return (0);
}
