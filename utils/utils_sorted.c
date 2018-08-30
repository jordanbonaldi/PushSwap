/*
** utils_sorted.c for is_sorted_utils in /home/Neferett/CPE_2016_Pushswap
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Fri Nov 25 22:59:12 2016 Bonaldi Jordan
** Last update Sat Nov 26 01:04:24 2016 Bonaldi Jordan
*/

#include "project.h"

Boolean         is_sorted(t_list        *l)
{
  t_list        *tmp;

  tmp = l->n;
  while (tmp->n != l)
    if (tmp->a <= tmp->n->a && (tmp = tmp->n));
    else
      return (false);
  return (true);
}

Boolean         irs(t_list        *l)
{
  t_list        *tmp;

  tmp = l->n;
  while (tmp->n != l)
    if (tmp->a >= tmp->n->a && (tmp = tmp->n));
    else
      return (false);
  return (true);
}
