/*
** xmalloc.c for my_survey in /home/decomb_s/Backup/ACC2
** 
** Made by Sylvain Decombe
** Login   <decomb_s@epitech.net>
** 
** Started on  Sun Mar 30 00:08:49 2014 Sylvain Decombe
** Last update Sun Mar 30 00:32:22 2014 Sylvain Decombe
*/

#include <stdlib.h>
#include "survey.h"

void            *xmalloc(int size)
{
  void  *tmp;

  tmp = malloc(size);
  if (tmp == NULL)
    {
      my_putstr("malloc() failded\n");
      exit(-1);
    }
  return (tmp);
}
