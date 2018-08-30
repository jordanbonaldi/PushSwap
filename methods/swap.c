/*
** swap.c for swap_methods in /home/Neferett/CPE_2016_Pushswap/methods
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Sun Nov 13 22:07:34 2016 Bonaldi Jordan
** Last update Sat Nov 26 18:22:30 2016 Bonaldi Jordan
*/

#include "project.h"

Boolean		swap(t_list	*al, t_list *b, char c)
{
  int	a;

  if (al->n->n == al)
    return (false);
  a = al->n->a;
  al->n->a = al->n->n->a;
  al->n->n->a = a;
  if (c == 'b' && my_printf("s%c ", c))
    return (true);
  else
    if ((!is_sorted(al) ||
	 (is_sorted(al) && (b->n != b))) && my_printf("s%c ", c)) {}
  else if (my_printf("s%c\n", c)) {}
  return (true);
}

Boolean		swap_c(t_list *a, t_list *b)
{
  if (!a || !b)
    return (false);
  swap(a, b, 'a');
  swap(b, b, 'b');
  return (true);
}
