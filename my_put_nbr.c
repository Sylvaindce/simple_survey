/*
** my_put_nbr.c for my_put_nbr in /home/decomb_s/rendu/Piscine-C-Jour_03
** 
** Made by decomb_s
** Login   <decomb_s@epitech.net>
** 
** Started on  Thu Oct  3 08:32:01 2013 decomb_s
** Last update Fri Mar 28 19:09:34 2014 Sylvain Decombe
*/

#include "survey.h"

int	my_put_nbr(int nb)
{
  int div;
  int nout;

  div = 1;
  nout = nb;
  if (nout < 0)
    {
      my_putchar('-');
      nout = nout *  -1;
    }
  while ((nout / div) > 9)
    {
      div = div * 10;
    }
  while (div > 0)
    {
      my_putchar('0' + (nout / div));
      nout = nout % div;
      div = div / 10;
    }
  return(0);
}
