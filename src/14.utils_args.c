/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   14.utils_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmalheir <tmalheir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:46:51 by tmalheir          #+#    #+#             */
/*   Updated: 2024/05/17 14:39:26 by tmalheir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

long	ft_atol(char *str)
{
	int		idx;
	int		sign;
	long	result;

	idx = 0;
	sign = 1;
	if (str[idx] == '-')
		sign = -1;
	if ((str[idx] == '-' || str[idx] == '+') && str[idx + 1])
		idx++;
	else if ((str[idx] == '-' || str[idx] == '+') && !str[idx + 1])
		ft_error();
	result = 0;
	while (str[idx] || str[idx] == '0')
	{
		if (str[idx] >= '0' && str[idx] <= '9')
			result = result * 10 + (str[idx] - '0');
		else
			ft_error();
		idx++;
	}
	return (sign * result);
}

void	ft_error(void)
{
	ft_putendl_fd("Error", 2);
	exit(EXIT_FAILURE);
}

int	ft_is_sorted(int nbr_a, int nbr_b)
{
	if (nbr_a >= nbr_b)
		return (1);
	return (0);
}

int	ft_nbr_abs(int nbr)
{
	if (nbr < 0)
		nbr *= -1;
	return (nbr);
}
