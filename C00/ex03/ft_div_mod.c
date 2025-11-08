#include <unistd.h>

void  ft_div_mod(int a, int b, int *div, int *mod)
{
  *div = (a) / (b);
  *mod = (a) % (b);

  /*char c = *div + '0';
  write(1, &c, 1);*/
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
