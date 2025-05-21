/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03.create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:02:32 by tmalheir          #+#    #+#             */
/*   Updated: 2024/05/17 11:21:22 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	create_new_node(t_stack **root, int value)
{
	t_stack	*new_node;
	t_stack	*curr;

	new_node = (t_stack *)malloc(sizeof(t_stack));
	if (!new_node)
		ft_error();
	new_node->data = value;
	new_node->next = NULL;
	if (*root == NULL)
		*root = new_node;
	else
	{
		curr = *root;
		while (curr->next)
			curr = curr->next;
		curr->next = new_node;
	}
}

void	create_stack(int argc, char **argv)
{
	t_stack	*root;
	t_stack	*temp;
	int		count;

	root = NULL;
	count = 1;
	temp = root;
	while (count < argc)
	{
		create_new_node(&root, ft_atoi(argv[count]));
		count++;
	}
	check_order(root, ft_is_sorted);
	count = ft_count_lst(root);
	push_swap(&root, count);
	ft_free_lst(&root);
}
