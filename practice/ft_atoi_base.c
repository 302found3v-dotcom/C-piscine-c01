int ft_check_base(char *base)
{
  int i;
  int j;

  i = 0;
  while (base[i] != '\0')
  {
    if (base[i] == '-' || base[i] == '+')
      return (0);
    j = i + 1;
    while (base[j] != '\0')
    {
      if (base[i] == base[j])
        return (0);
      j++;
    }
    i++;
  }
  if (i < 2)
    return (0);
  return (1);
}

int ft_index(char c, char *base)
{
  int i;

  i = 0;
  while (base[i] != '\0')
  {
    if (base[i] == c)
      return (i);
    i++;
  }
  return (-1);
}

int ft_possible_chars(char c)
{
  return (c == ' ' || (c >= 9 && c <= 13));
}

int ft_atoi_base(char *str, char *base)
{
  int res;
  int sign;
  int base_len;
  int index_value;

  res = 0;
  sign = 1;
  base_len = 0;
  while (base[base_len] != '\0')
    base_len++;
  if (!ft_check_base(base))
    return (0);
  while (ft_possible_chars(*str) || *str == '-' || *str == '+')
  {
    if (*str == '-')
      sign *= -1;
    str++;
  }
  while (*str != '\0')
  {
    index_value = ft_index(*str, base);
    if (index_value == -1)
      break ;
    res = (res * base_len) + index_value;
    str++;
  }
  return (res * sign);
}

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
  if (argc > 1)
  {
    int func = ft_atoi_base(argv[1], argv[2]);
    printf("%d\n", func);
  }
  return (0);
}
