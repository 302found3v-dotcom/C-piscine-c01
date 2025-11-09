#include <unistd.h>

int ft_strlen(char *str)
{
  int i;

  i = 0;
  while (*str != '\0')
  {
    str++;
    i++;
  }
  return (i);
}
/*
int main(void)
{
  ft_strlen("Hello World!");
  return (0);
}*/
