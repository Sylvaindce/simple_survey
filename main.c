/*
** main.c for ACCsurvey in /home/decomb_s/Backup/ACC2
** 
** Made by Sylvain Decombe
** Login   <decomb_s@epitech.net>
** 
** Started on  Wed Mar 26 14:08:37 2014 Sylvain Decombe
** Last update Tue Apr  1 11:07:33 2014 Sylvain Decombe
*/

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "survey.h"

void            my_putintab(char *buff)
{
  char  **stock;
  int   i;
  int   x;
  int   y;

  y = 0;
  i = 0;
  stock = xmalloc(sizeof(char*) * 512 + 1);
  while (buff[i] != '\0')
    {
      x = 0;
      stock[y] = xmalloc(sizeof(char) * 512 + 1);
      while (buff[i] != '\n' && buff[i] != '\0')
        stock[y][x++] = buff[i++];
      stock[y++][x++] = '\0';
      if (buff[i] == '\n')
	i = i + 1;
    }
  stock[y] = NULL;
  check2(stock);
}

int             main(int argc, char **argv)
{
  int	fd;
  char  *buff;
  int   rd;
  int   i;

  i = 0;
  buff = xmalloc(sizeof(char) * 512 + 1);
  if (argc == 3)
    {
      init_open(argv[2]);
      if((fd = open(argv[1], O_RDONLY)) == -1)
        return (-1);
      if ((rd = read(fd, buff, 4095)) <= 0)
	  return (-1);
      buff[rd] = '\0';
      my_putintab(buff);
    }
  else
    {
      my_putstr("ERROR, Please enter an input and output file in parameter.\n");
      return (EXIT_FAILURE);
    }
}
