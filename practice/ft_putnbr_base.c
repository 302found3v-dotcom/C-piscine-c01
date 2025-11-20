#include <unistd.h>

void  ft_putchar(char c)
{
  write(1, &c, 1);
}

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

void  ft_putnbr_base(int nbr, char *base)
{
  int base_len;

  base_len = 0;
  while (base[base_len] != '\0')
  {
    base_len++;
  }
  if (!ft_check_base(base))
  {
    return ;
  }
  if (nbr < 0)
  {
    ft_putchar('-');
    nbr = -nbr;
  }
  if (nbr >= base_len)
  {
    ft_putnbr_base(nbr / base_len, base);
  }
  ft_putchar(base[nbr % base_len]);
}

#include <stdlib.h>

int main(void)
{
  ft_putnbr_base(atoi("42"), "01");
  return (0);
}
