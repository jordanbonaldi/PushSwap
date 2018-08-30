/*
** error.c for error in /home/Neferett/PUSHSWAP
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Thu Nov 24 21:18:42 2016 Bonaldi Jordan
** Last update Thu Nov 24 21:28:51 2016 Bonaldi Jordan
*/

#include "project.h"

Boolean		get_error(int argc, char **argv)
{
  if (argc == 1)
    return (false);
  while (--argc > 1)
  if (!my_str_isnum(argv[argc]))
    return (false);
  return (true);
}
