/*
** my_strdup.c for my_strdup in /home/decomb_s/rendu
** 
** Made by decomb_s
** Login   <decomb_s@epitech.net>
** 
** Started on  Wed Oct  9 09:04:23 2013 decomb_s
** Last update Sun Mar 30 00:36:13 2014 Sylvain Decombe
*/

#include <stdlib.h>
#include "survey.h"

char	*my_strdup(char *src)
{
  char	*dest;
  int	n;

  n = 0;
  while (src[n] != 0)
    {
      n = n + 1;
    }
  dest = malloc(n);
  n = 0;
  while (src[n] != 0)
    {
      dest[n] = src[n];
      n = n + 1;
    }

  return(dest);
}
