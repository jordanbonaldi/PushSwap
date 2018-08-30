/*
** rotate.c for rotate_methods in /home/Neferett/CPE_2016_Pushswap/methods
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Sun Nov 13 22:07:57 2016 Bonaldi Jordan
** Last update Sat Nov 26 01:06:42 2016 Bonaldi Jordan
*/

#include "project.h"

Boolean		rr_e(t_list	*l, t_list *b)
{
  if (!l)
    return (false);
  my_put_first_in_list(l, l->p->a);
  my_remove_spec(l->p);
  if ((!is_sorted(l) ||
       (is_sorted(l) && b->n != b)) && !my_putstr("rra ")) {}
  else
    my_putstr("rra\n");
  return (true);
}

Boolean		rr_r(t_list	*la, t_list	*lb)
{
  if (!la || !lb)
    return (false);
  rr_e(la, lb);
  rr_e(lb, la);
  return (true);
}

Boolean		r_f(t_list	*l, t_list *b, char c)
{
  if (!l)
    return (false);
  my_put_end_in_list(l, l->n->a);
  my_remove_spec(l->n);
  if ((!is_sorted(l) ||
       (is_sorted(l) && b->n != b)) && my_printf("r%c ", c)) {}
  else
    my_printf("r%c\n", c);
  return (true);
}

Boolean		r_fc(t_list	*la, t_list	*lb)
{
  r_f(la, lb, 'a');
  r_f(lb, lb, 'b');
  return (true);
}
