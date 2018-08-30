/*
** project.h for project_header in /home/Neferett/bin/IMPORT/include
** 
** Made by Bonaldi Jordan
** Login   <Neferett@epitech.net>
** 
** Started on  Mon Nov 21 01:13:04 2016 Bonaldi Jordan
** Last update Sat Nov 26 01:04:08 2016 Bonaldi Jordan
*/

#ifndef H_CHECK
#define H_CHECK

#include "lib.h"

typedef struct		s_list
{
  int			a;
  struct s_list		*p;
  struct s_list		*n;
}			t_list;

t_list		*create();
void		my_put_end_in_list(t_list *, int);
void		my_put_first_in_list(t_list *, int);
void		my_remove_spec(t_list *);
void		my_params_in_list(int, char **, t_list *);
void		disp_list(t_list *);
Boolean		irs(t_list *);
Boolean		sorting_algo(t_list *, t_list *);
Boolean		is_sorted(t_list *);
Boolean		swap(t_list *, t_list *, char);
Boolean		swap_c(t_list *, t_list *);
Boolean         push_a(t_list *, t_list *);
Boolean         push_b(t_list *, t_list *);
Boolean         r_fc(t_list *, t_list *);
Boolean		r_f(t_list *, t_list *, char);
Boolean         rr_r(t_list *, t_list *);
Boolean         rr_e(t_list *, t_list *);
Boolean		get_error(int, char **);
Boolean		exception(t_list *, t_list *);
int		g_l(t_list	*);

#endif
