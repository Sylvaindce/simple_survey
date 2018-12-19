/*
** my_strlen.c for my_survey in /home/decomb_s/Backup/ACC2
** 
** Made by Sylvain Decombe
** Login   <decomb_s@epitech.net>
** 
** Started on  Fri Mar 28 12:36:49 2014 Sylvain Decombe
** Last update Fri Mar 28 19:08:44 2014 Sylvain Decombe
*/

#include "survey.h"

int             my_strlen(char *str)
{
  int           i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
