/*
** prompt.c for my_survey in /home/decomb_s/Backup/ACC2
** 
** Made by Sylvain Decombe
** Login   <decomb_s@epitech.net>
** 
** Started on  Thu Mar 27 09:19:58 2014 Sylvain Decombe
** Last update Sun Mar 30 00:33:19 2014 Sylvain Decombe
*/

#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "survey.h"

int		prompt_open()
{
  char  *buff;
  int   rd;
  char  *argv;
  int	fdr;
  
  buff = xmalloc(sizeof(char) * 512 + 1);
  fdr = ret_fd(1);
  my_putstr("Answer: ");
  if ((rd = read(0, buff, 512)) < 0)
      return (0);
  buff[rd] = 0;
  if (buff[1] == '\0')
    {
      my_putstr("Please enter an answer. \n");
      prompt_open();
    }
  else 
    {
      stock_result(fdr, buff);
      my_putchart(fdr, '\n');
      my_putchar('\n');
    }
}

int		prompt_close(int a, char **str)
{
  char  buff[10];
  int   rd;
  int	fdr;

  my_putstr("Answer: ");
  if ((rd = read(0, buff, 10)) < 0)
    {
      my_putstr("Error, read the usage manual ! \n");
      return (0);
    }
  buff[rd] = 0;
  if (buff[1] == '\0' || my_getnbr(buff) <= 0 || my_getnbr(buff) >= a )
    {
      my_putstr("Please enter a correct answer. \n");
      prompt_close(a, str);
    }
  else 
    reponsechar(buff, str);
}

void		init_open(char *argv2)
{
  int	fd;

  fd = open(argv2, O_RDWR | O_CREAT, S_IRWXU | O_TRUNC);
  ret_fd(fd);
}

int            ret_fd(int fd)
{
  static int fd1;
  static int i;

  if (i == 0)
    fd1 = fd;
  i++;
  return (fd1);
}

void		stock_result(int fd, char *str)
{
  write(fd, str, my_strlen(str));
}
