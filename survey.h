/*
** survey.h for my_survey in /home/decomb_s/Backup/ACC2
** 
** Made by Sylvain Decombe
** Login   <decomb_s@epitech.net>
** 
** Started on  Fri Mar 28 18:21:20 2014 Sylvain Decombe
** Last update Sun Mar 30 00:33:17 2014 Sylvain Decombe
*/

#ifndef		__MY_SURVEY_H_
#define		__MY_SURVEY_H_

void            check2(char **stock);
int             compar(int count, int   max);
int             check_validity(char **stock);
int             my_count(char *str);
void            displo(char *buff);
void            displc(char *buff);
int             displa(char **buff, int y);
void            gere_displ(char **stock);
int             countline(char **str);
void            reponsechar2(int fd, int linemax, int nbline, char **str);
void            reponsechar(char *buff, char **str);
void            my_putintab(char *buff);
int             get_calc(int i, int sign, int nb, char *str);
int             my_getnbr(char *str);
int             my_putchart(int fd, char c);
int		my_put_nbr(int nb);
int             my_putchar(char c);
int		my_putstr(char *str);
char		*my_strdup(char *src);
int             my_strlen(char *str);
int             prompt_open();
int             prompt_close(int a, char **str);
void            init_open(char *argv2);
int             ret_fd(int fd);
void            stock_result(int fd, char *str);
void            *xmalloc(int size);

#endif
