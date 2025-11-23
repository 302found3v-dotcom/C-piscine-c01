int ft_iterative_factorial(int nb)
{
  int factorial;

  factorial = 1;
  if (nb <= 0)
    return (0);
  while (nb >= 1)
  {
    factorial *= nb;
    nb--;
  }
  return (factorial);
}

#include <stdio.h>

int main(void)
{
  int func = ft_iterative_factorial(9);
  printf("%d\n", func);
  return (0);
}
