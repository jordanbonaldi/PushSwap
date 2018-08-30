/*
** main.c for main in /home/Neferett/bin/IMPORT
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Nov 14 14:04:13 2016 Bonaldi Jordan
** Last update Sat Nov 26 18:23:31 2016 Bonaldi Jordan
*/

#include "project.h"

int	main(int argc, char **argv)
{
  t_list	*b;
  t_list	*a;

  if (!get_error(argc, argv))
    return (84);
  if ((a = create()) && (b = create())) {}
  my_params_in_list(argc, argv, a);
  if (is_sorted(a))
    my_printf("\n");
  else if (sorting_algo(a, b)) {}
  return (0);
}
