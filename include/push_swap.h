/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 10:37:08 by tmalheir          #+#    #+#             */
/*   Updated: 2024/05/17 11:55:48 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
/**
 * limits.h (int min, int max);
 * stdlib.h (exit);
 * unistd.h (write);
 * libft.h (libft functions);
 * ft_printf (printing functions);
*/
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>
# include "../lib/libft/libft.h"
# include "../lib/ft_printf/ft_printf.h"

typedef struct s_stack
{
	int				data;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}				t_stack;

typedef struct s_idx
{
	int	str1;
	int	str2;
	int	idx;
}				t_idx;

/**
 * main functions
*/
void	check_argc(int argc);
void	check_argv(char **argv);
void	create_stack(int argc, char **argv);

/**
 * check args functions
*/
void	check_errors(char *str, long nbr);
void	check_order(t_stack *lst, int (*cmp)(int, int));
void	check_repeat(char **argv);

/**
 * create stack functions
*/
void	create_new_node(t_stack **root, int value);
void	push_swap(t_stack **lst, int count);

/**
 * push swap functions
*/
void	sort_all(t_stack **lst, int count);
void	sort_three(t_stack **lst);

/**
 * sorting algorithm functions
*/
void	assign_index(t_stack **lst);
void	first_push_to_b(t_stack **src, t_stack **dst, int count);
int		max_index(t_stack **lst);
int		min_index(t_stack **lst);
void	get_position(t_stack **lst);
void	get_targ_pos(t_stack **lst_a, t_stack **lst_b, int max, int min);
void	calc_cost(t_stack **lst_a, t_stack **lst_b);
void	find_cheapest_cost(t_stack **lst_a, t_stack **lst_b);

/**
 * stack position functions
*/
int		min_pos(t_stack **list);
int		pos_min_idx(t_stack **lst_a, t_stack **lst_b, int min_idx);

/**
 * moves functions
*/
void	do_move(t_stack **lst_a, t_stack **lst_b, int cost_a, int cost_b);
void	rev_rot_both(t_stack **lst_a, t_stack **lst_b, int *cst_a, int *cst_b);
void	rot_both(t_stack **lst_a, t_stack **lst_b, int *cost_a, int *cost_b);
void	rotate_a(t_stack **lst, int cost);
void	rotate_b(t_stack **lst, int cost);

/**
 * push functions
*/
void	push(t_stack **src, t_stack **dst);
void	push_a(t_stack **src, t_stack **dst);
void	push_b(t_stack **src, t_stack **dst);

/**
 * reverse rotate functions
*/
void	rev_rotate(t_stack **lst);
void	rra(t_stack **lst);
void	rrb(t_stack **lst);
void	rrr(t_stack **lst_a, t_stack **lst_b);

/**
 * rotate functions
*/
void	rotate(t_stack **lst);
void	ra(t_stack **lst);
void	rb(t_stack **lst);
void	rr(t_stack **lst_a, t_stack **lst_b);
/**
 * swap functions
*/
void	swap(t_stack **lst);
void	sa(t_stack **lst);
void	sb(t_stack **lst);

/**
 * utils args functions
*/
long	ft_atol(char *str);
void	ft_error(void);
int		ft_is_sorted(int nbr_a, int nbr_b);
int		ft_nbr_abs(int nbr);

/**
 * utils lists functions
*/
int		ft_count_lst(t_stack *lst);
void	ft_free_lst(t_stack **lst);
int		scan_lst(t_stack **list_a, int idx_b);

#endif