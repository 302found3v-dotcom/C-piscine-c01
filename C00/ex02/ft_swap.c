#include <unistd.h>

void  ft_swap(int *a, int *b)
{
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}
/*
int main(void)
{
  int n = 43;
  int f = 3;

  ft_swap(&n, &f);
  return (0);
}*/
