/*
** my_params_in_list.c for my_params_in_list in /home/Neferett/bin
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Oct 17 08:50:14 2016 Bonaldi Jordan
** Last update Sun Nov 27 01:46:28 2016 Bonaldi Jordan
*/

#include "project.h"

void	my_put_end_in_list(t_list *, int);
void	my_put_first_in_list(t_list *, int);

void	my_params_in_list(int args, char **arg, t_list	*l)
{
  int	i;

  i = 0;
  while (++i < args)
    my_put_end_in_list(l, my_getnbr(arg[i]));
}

void	my_put_end_in_list(t_list *list, int a)
{
  t_list	*e;

  if (!(e = malloc(sizeof(*e))))
    return;
  e->a = a;
  e->p = list->p;
  e->n = list;
  list->p->n = e;
  list->p = e;
}

void	my_put_first_in_list(t_list	*list, int a)
{
  t_list	*e;

  if (!(e = malloc(sizeof(*e))))
    return;
  e->a = a;
  e->p = list;
  e->n = list->n;
  list->n->p = e;
  list->n = e;
}
