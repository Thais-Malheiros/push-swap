/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04.push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 10:42:43 by tmalheir          #+#    #+#             */
/*   Updated: 2024/05/17 11:20:30 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	push_swap(t_stack **lst, int count)
{
	if (count == 2)
		sa(lst);
	else if (count == 3)
		sort_three(lst);
	else
		sort_all(lst, count);
}
