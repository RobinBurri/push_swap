/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 12:18:31 by rburri            #+#    #+#             */
/*   Updated: 2021/11/17 14:11:44 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_sorted(t_stack *stack)
{
	t_node	*tmp;

	tmp = *stack;
	while (tmp->n != NULL)
	{
		if (tmp->v > tmp->n->v)
			return (0);
		tmp = tmp->n;
	}
	return (1);
}
