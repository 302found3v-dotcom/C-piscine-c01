#include <unistd.h>

void  ft_div_mod(int a, int b, int *div, int *mod)
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
