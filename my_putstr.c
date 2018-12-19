/*
** my_putstr.c for my_putstr in /home/decomb_s/rendu/Piscine-C-Jour_04
** 
** Made by decomb_s
** Login   <decomb_s@epitech.net>
** 
** Started on  Thu Oct  3 16:33:41 2013 decomb_s
** Last update Fri Mar 28 19:09:04 2014 Sylvain Decombe
*/

#include "survey.h"

int		my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (i);
}
