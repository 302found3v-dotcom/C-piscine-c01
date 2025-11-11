/*#include <stdio.h>*/

int ft_str_is_printable(char *str)
{
  int i;

  i = 0;
  if (*str == '0')
  {
    return (1);
  }
  while (str[i] != '\0')
  {
    if (str[i] >= 31 && str[i] <= 126)
      i++;
    else
      return (0);
  }
  return (1);
}
/*
int main(void)
{
  char  *str;
  int func;

  str = "\t384884Hola Mundo";
  func = ft_str_is_printable(str);
  printf("%d\n", func);
  return (0);
}*/
