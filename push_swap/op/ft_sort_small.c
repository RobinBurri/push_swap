/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 15:21:07 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 17:09:46 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_sort_small(t_node **a, t_node **b)
{
	int	len;

	len = ft_stklen(*a);
	if (ft_is_sorted(a) || len == 1)
		return ;
	if (len == 2)
	{
		swap_a(a);
		return ;
	}
	if (len == 3)
		ft_sort_three(a);
	if (len == 4 || len == 5)
		ft_sort_ff(a, b, len);
}
