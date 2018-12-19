/*
** check.c for my_survey in /home/decomb_s/Backup/ACC2
** 
** Made by Sylvain Decombe
** Login   <decomb_s@epitech.net>
** 
** Started on  Wed Mar 26 14:53:27 2014 Sylvain Decombe
** Last update Sun Mar 30 00:20:30 2014 Sylvain Decombe
*/

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "survey.h"

void             check2(char **stock)
{
  int   y;
  int   err;

  y = 0;
  err = check_validity(stock);
  if (err == 0)
      gere_displ(stock);
  else if (err == -1)
    my_putstr("Error, put a valid survey. \n");
}

int            compar(int count, int   max)
{
  if (count == max)
    return(0);
  else
    return(-1);
}

int             check_validity(char **stock)
{
  int   y;
  int   k;
  int   j;

  j = my_getnbr(stock[0]);
  k = 0;
  y = 1;
  while (stock[y] != NULL)
    {
      if (stock[y][0] == 'O' && stock[y][1] == 'Q')
        k++;
      if (stock[y][0] == 'C' && stock[y][1] == 'Q')
        k++;
      if (stock[y][0] == 'A' && stock[y][1] == ':')
	k++;
      y++;
    }
  if (compar(k, j) == 0)
    return (0);
  return (-1);
}
