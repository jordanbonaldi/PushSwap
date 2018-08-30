/*
** algorithm.c for algotihm in /home/Neferett/CPE_2016_Pushswap
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Tue Nov 22 21:39:55 2016 Bonaldi Jordan
** Last update Sun Nov 27 02:10:18 2016 Bonaldi Jordan
*/

#include "project.h"

Boolean		i_b(t_list	*b)
{
  return (b->n == b ? false : true);
}

Boolean		sorting_algo(t_list	*a, t_list	*b)
{
  Boolean	b_sort;
  Boolean	a_sort;
  Boolean	s;

  if (is_sorted(a))
    return (true);
  if (!(s = false) && (b_sort = true) && !(a_sort = false)) {}
  while (!s)
    {
      if (a->n->a > a->n->n->a && swap(a, b, 'a')) {}
      if (a->n->a > (g_l(a)) && r_f(a, b, 'a')) {}
      a_sort = is_sorted(a);
      if (!a_sort && a->n->a < a->n->n->a && push_b(a, b)
  	  && (b_sort = (i_b(b) && ((b->n->a < g_l(b) && r_f(b, b, 'b')) ||
  				   (b->n->a < b->n->n->a &&
  				    swap(b, b, 'b'))) ? irs(b) : true))) {}
      while (a_sort && i_b(b) && push_a(a, b)
  	     && (a_sort = is_sorted(a)));
      if (!i_b(b) && (b_sort = true)) {}
      if (a_sort && b_sort && !i_b(b))
  	s = true;
    }
  return (true);
}
