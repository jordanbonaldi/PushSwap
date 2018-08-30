/*
** replace.c for replace_methods in /home/Neferett/CPE_2016_Pushswap/methods
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Sun Nov 13 22:07:48 2016 Bonaldi Jordan
** Last update Fri Nov 25 22:11:11 2016 Bonaldi Jordan
*/

#include "project.h"

Boolean		push_a(t_list *a, t_list *b)
{
  if (!a || !b)
    return (false);
  my_put_first_in_list(a, b->n->a);
  my_remove_spec(b->n);
  if ((!is_sorted(a) ||
       (is_sorted(a) && b->n != b)) && !my_putstr("pa ")) {}
  else
    my_putstr("pa\n");
  return (true);
}

Boolean		push_b(t_list *a, t_list *b)
{
  if (!a || !b)
    return (false);
  my_put_first_in_list(b, a->n->a);
  my_remove_spec(a->n);
  my_putstr("pb ");
  return (true);
}
