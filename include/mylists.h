/*
** mylists.h for libmylists in /home/bassintag/delivery/Libmylists/include
** 
** Made by Antoine Stempfer
** Login   <antoine.stempfer@epitech.net>
** 
** Started on  Tue Nov 22 21:24:57 2016 Antoine Stempfer
** Last update Sat Jan  7 16:53:21 2017 Antoine Stempfer
*/

#ifndef MYLISTS_H_
#define MYLISTS_H_

typedef struct	s_list
{
  void		*value;
  struct s_list	*next;
}		t_list;

void	my_list_append(t_list **, void *);

void	my_list_prepend(t_list **, void *);

void	my_list_insert(t_list **, void *, int);

int	my_list_len(t_list *);

void	*my_list_delete(t_list **, int);

void	my_list_remove(t_list **, void *);

void	my_list_free(t_list **);

void	*my_list_find(t_list *, void *, int (*)(void *, void *));

void	*my_list_get(t_list *, int);

void	my_list_sort(t_list **, int (*)(void *, void *), int);

void	my_list_rotate(t_list **);

#endif