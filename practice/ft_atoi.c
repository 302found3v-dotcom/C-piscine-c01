int ft_possible_chars(char c)
{
  return (c == ' ' || (c >= 9 && c <= 13));
}

int ft_signs(char c)
{
  return (c == '-' || c == '+');
}

int  ft_numbers(char c)
{
  return ((c >= '0' && c <= '9'));
}

int ft_atoi(char *str)
{
  int res;
  int sign;

  res = 0;
  sign = 1;
  while (ft_possible_chars(*str) || ft_signs(*str))
  {
    if (*str == '-')
      sign *= -1;
    str++;
  }
  while (ft_numbers(*str))
  {
    res = (res * 10) + *str - '0';
    str++;
  }
  return (res * sign);
}

#include <stdio.h>
int main(int argc, char **argv)
{
  if (argc > 1)
  {
    int func = ft_atoi(argv[1]);
    printf("%d\n", func);
  }
  return (0);
}
