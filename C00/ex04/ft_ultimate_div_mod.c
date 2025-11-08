#include <unistd.h>

/*void  ft_putnbr(int nb)
{
  if (nb >= 10)
    ft_putnbr(nb / 10);
  char c = (nb % 10) + '0';
  write(1, &c, 1);
}*/

void  ft_ultimate_div_mod(int *a, int *b)
{
  int div;
  int rest;

  div = (*a) / (*b);
  rest = (*a) % (*b);
  *a = div;
  *b = rest;

  /*ft_putnbr(rest);*/
}
/*
int main(void)
{
  int a = 8;
  int b = 59;

  ft_ultimate_div_mod(&a, &b);
  return (0);
}*/
