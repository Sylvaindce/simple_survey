/*
** gere_reponse.c for my_survey in /home/decomb_s/Backup/ACC2
** 
** Made by Sylvain Decombe
** Login   <decomb_s@epitech.net>
** 
** Started on  Sat Mar 29 17:19:08 2014 Sylvain Decombe
** Last update Sun Mar 30 00:25:32 2014 Sylvain Decombe
*/

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "survey.h"

int		countline(char **str)
{
 static  int	count;

  while (str[count] != NULL)
      count++;
  return (count);
}

void		reponsechar2(int fd, int linemax, int nbline, char **str)
{
  int	i;

  i = 0;
  while (i <= (linemax - 1))
    {
      if (i == nbline)
  	{
  	  stock_result(fd, "[X] ");
  	  stock_result(fd, str[nbline]);
  	  my_putchart(fd, '\n');
  	}
      else
  	{
  	  stock_result(fd, "[ ] ");
  	  stock_result(fd, str[i]);
  	  my_putchart(fd, '\n');
  	}
      i = i + 1;
    }
}

void		reponsechar(char *buff, char **str)
{
  int	nbline;
  int	linemax;
  int	fd;

  fd = ret_fd(1);
  linemax = countline(str);
  nbline = my_getnbr(buff);
  nbline = nbline - 1;
  reponsechar2(fd, linemax, nbline, str);
  my_putchart(fd, '\n');
}
