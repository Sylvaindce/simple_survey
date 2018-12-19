/*
** my_getnbr.c for my_getnbr in /home/decomb_s/rendu/ACCsurvey
** 
** Made by Sylvain Decombe
** Login   <decomb_s@epitech.net>
** 
** Started on  Thu Mar 20 12:51:17 2014 Sylvain Decombe
** Last update Fri Mar 28 19:09:49 2014 Sylvain Decombe
*/

#include "survey.h"

int		get_calc(int i, int sign, int nb, char *str)
{
  while (str[i])
    {
      if (str[i] == '-' || str[i] == '+')
	{
	  if (str[i] == '-')
	    sign++;
	}
      else if (str[i] >= '0' && str[i] <= '9')
	nb = (nb * 10) + (str[i] -48);
      else
	{
	  if (sign % 2 == 1)
	    nb = nb * -1;
	  return (nb);
	}
      i++;
    }
  if (sign % 2 == 1)
    nb = nb * -1;
  return (nb);
}

int		my_getnbr(char *str)
{
  int		i;
  int		sign;
  int		nb;

  i = 0;
  nb = 0;
  sign = 0;
  nb = get_calc(i, sign, nb, str);
  return (nb);
}
