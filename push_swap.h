/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhunter <mhunter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 20:51:44 by mhunter           #+#    #+#             */
/*   Updated: 2022/03/30 20:53:06 by mhunter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <limits.h>
# include <stddef.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);
int		ft_isnumber(char	*str);
int		ft_checknum(char	*str);
int		ft_masssort(int	*mass, int len);
int		ft_chckm(int	*mass, int len);
int		cnt_n(int argc, char *argv[]);
void	free_nums(char **nums, int len);
typedef struct stack_list
{
	int						v;
	struct stack_list		*next;
	int						score_br;
	int						score_brr;
	int						score_ar;
	int						score_arr;
	int						score_rr;
	int						score_rrr;
}							t_list;
int		init(int argc, char *argv[], int *args, t_list **lst_a);
void	ft_lsttsadd_back(t_list **lst, t_list *new);
void	ft_lsttsadd_front(t_list **lst, t_list *new);
int		ft_lsttssize(t_list *lst);
t_list	*ft_lsttsnew(int content);
t_list	*ft_lsttsmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lsttslast(t_list *lst);
void	ft_lsttsiter(t_list *lst, void (*f)(void *));
void	ft_lsttsclear(t_list **lst, void (*del)(void *));
void	swap_stack(t_list	**stack);
void	push_stack(t_list	**stack_src, t_list	**stack_dest);
void	rotate_stack(t_list	**stack);
void	rev_rotate_stack(t_list	**stack);
void	swap_two_stacks(t_list **lst_a, t_list **lst_b);
void	rotate_two_stacks(t_list **lst_a, t_list **lst_b);
void	rev_rotate_two_stacks(t_list **lst_a, t_list **lst_b);
t_list	*ft_lsttsmin(t_list *lst);
int		ft_is_list_sorted(t_list	**lst);
int		ft_is_list_fully_sorted(t_list	**lst);
void	full_sort_A(t_list **lst_a, int min);
int		ft_is_sorted(int	*mass, int len);
int		find_median(int	*mass, int len);
int		find_max(int	*mass, int len);
int		find_min(int	*mass, int len);
void	mmm_to_b(t_list **lst_a, t_list **lst_b, int *args, int l);
void	ft_pairsort(t_list	**lst);
void	ft_triplesort(t_list	**lst);
void	ft_five_sort(t_list **lst_a, t_list **lst_b);
void	analize(t_list	**lst_a, t_list **lst_b);
int		count_rb(t_list	**lst, int val);
int		count_rrb(t_list	**lst, int val);
int		count_ra(t_list	**lst, int val);
int		count_rra(t_list	**lst, int val);
t_list	*find_elem(t_list **lst_b, int val);
int		choose_val(t_list **lst_b);
int		choose_way(t_list *p);
void	first_way(t_list **lst_a, t_list **lst_b, t_list	*p);
void	second_way(t_list **lst_a, t_list **lst_b, t_list *p);
void	third_way(t_list **lst_a, t_list **lst_b, t_list	*p);
void	fourth_way(t_list **lst_a, t_list **lst_b, t_list *p);
void	apply_ops(t_list **lst_a, t_list **lst_b, int val, int way);
void	ft_ra(t_list **lst_a);
void	ft_sa(t_list **lst_a);
void	ft_p(t_list **lst_a, t_list **lst_b, char target);
void	ft_rra(t_list **lst_a);
int		ft_lstmax(t_list	*lst);
int		ft_lstmin(t_list	*lst);
int		count_ra_formax(t_list	**lst, int max);
int		count_rra_formax(t_list **lst, int max);
int		fill_stack(int count, char *var, int *args, t_list **lst_a);

#endif
