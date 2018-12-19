/*
** display.c for my_survey in /home/decomb_s/Backup/ACC2
** 
** Made by Sylvain Decombe
** Login   <decomb_s@epitech.net>
** 
** Started on  Wed Mar 26 14:57:14 2014 Sylvain Decombe
** Last update Sun Mar 30 00:23:47 2014 Sylvain Decombe
*/

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "survey.h"

int		my_count(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

void		displo(char *buff)
{
  int	i;
  int	max;
  int	fdr;

  fdr = ret_fd(1);
  max = my_count(buff);
  i = 3;
  while (buff[i] != '\0')
    {
      my_putchar(buff[i]);
      my_putchart(fdr, buff[i]);
      i++;
    }
  my_putchart(fdr, '\n');
  my_putchar('\n');
  i = 3;
  while (i++ < max)
    {
      my_putchart(fdr, '-');
      my_putchar('-');
    }
  my_putchart(fdr, '\n');
  my_putchar('\n');
  prompt_open();
}

void		displc(char *buff)
{
  int	i;
  int	max;
  int	fd;

  fd = ret_fd(1);
  max = my_count(buff);
  i = 3;
  while (buff[i] != '\0')
    {
      my_putchart(fd, buff[i]);
      my_putchar(buff[i]);
      i++;
    }
  my_putchart(fd, '\n');
  my_putchar('\n');
  i = 3;
  while (i < max)
    {
      my_putchart(fd, '-');
      my_putchar('-');
      i++;
    }
  my_putchart(fd, '\n');
  my_putchar('\n');
}

int		displa(char **buff, int y)
{
  int	a;
  int	i;
  char	**str;

  i = 0;
  a = 1;
  str = xmalloc(sizeof(char *) * 512 + 1);
  while (buff[y] != NULL && buff[y][0] == 'A' && buff[y][1] == ':')
    {
      my_put_nbr(a++);
      my_putstr(") ");
      str[i] = xmalloc(sizeof(char) * 512 + 1);
      str[i++] = buff[y] + 2;
      my_putstr(buff[y++] + 2);
      my_putchar('\n');
    }
  str[i] == NULL;
  prompt_close(a, str);
  my_putchar('\n');
  return (y - 1);
}


void		gere_displ(char **stock)
{
  int	y;
  int	count;

  count = 0;
  y = 0;
  while (stock[y] != NULL)
    {
      if (stock[y][0] == 'O' && stock[y][1] == 'Q')
	  displo(stock[y]);
      if (stock[y][0] == 'C' && stock[y][1] == 'Q')
	  displc(stock[y]);
      if (stock[y][0] == 'A' && stock[y][1] == ':')
	  y = displa(stock, y);
      y++;
    }
}
