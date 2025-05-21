/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10.push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:47:08 by tmalheir          #+#    #+#             */
/*   Updated: 2024/05/16 09:33:32 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	first_push_to_b(t_stack **src, t_stack **dst, int count)
{
	int	idx;

	idx = 1;
	while (idx <= (count - 3))
	{
		while (idx < (count / 2))
		{
			if ((*src)->index < (count / 2))
			{
				push_b(src, dst);
				idx++;
			}
			else
				ra(src);
		}
		if (idx <= (count - 3))
		{
			push_b(src, dst);
			idx++;
		}
	}
}

void	push(t_stack **src, t_stack **dst)
{
	t_stack	*tmp;

	if (!*src)
		return ;
	tmp = (*src)->next;
	(*src)->next = *dst;
	*dst = *src;
	*src = tmp;
}

void	push_a(t_stack **src, t_stack **dst)
{
	push(src, dst);
	ft_printf("pa\n");
}

void	push_b(t_stack **src, t_stack **dst)
{
	push(src, dst);
	ft_printf("pb\n");
}
