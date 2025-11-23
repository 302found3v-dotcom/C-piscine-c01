#include <stdio.h>
#include <stdlib.h>

int ft_fibonacci(int index)
{
  if (index < 0)
    return (-1);
  if (index == 0)
    return (0);
  if (index == 1)
    return (1);
  return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main(int argc, char **argv)
{
  if (argc > 1)
  {
    int func = ft_fibonacci(atoi(argv[1]));
    printf("%d\n", func);
  }
  else
    printf("\n");
  return (0);
}
