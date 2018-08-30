/*
** utils.c for utils in /home/Neferett/PUSHSWAP
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Thu Nov 24 19:18:24 2016 Bonaldi Jordan
** Last update Sat Nov 26 01:03:47 2016 Bonaldi Jordan
*/

#include "project.h"

t_list  *create()
{
  t_list        *c;

  if ((c = malloc(sizeof(*c)))
      && (c->n = c) && (c->p = c)) {}
  return (c);
}

void    disp_list(t_list        *l)
{
  t_list        *tmp;

  tmp = l;
  while (tmp->n != l)
    {
      my_printf("%d ", tmp->n->a);
      tmp = tmp->n;
    }
  my_printf("\n");
}

void	my_remove_spec(t_list	*l)
{
  if ((l->p->n = l->n) && (l->n->p = l->p)) {}
  free(l);
}

int	g_l(t_list	*l)
{
  t_list	*tmp;

  tmp = l->n;
  while (tmp->n != l && (tmp = tmp->n));
  return (tmp->a);
}
