/*
** my_putchart.c for my_survey in /home/decomb_s/Backup/ACC2
** 
** Made by Sylvain Decombe
** Login   <decomb_s@epitech.net>
** 
** Started on  Sat Mar 29 14:44:54 2014 Sylvain Decombe
** Last update Sun Mar 30 00:35:23 2014 Sylvain Decombe
*/

#include "survey.h"

int		my_putchart(int fd, char c)
{
  write(fd, &c, 1);
}
