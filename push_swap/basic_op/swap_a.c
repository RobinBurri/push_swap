/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 18:52:35 by rburri            #+#    #+#             */
/*   Updated: 2021/12/03 16:31:36 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*swap the first two el of the stack a
Nothing is done if there is one or zero el*/

#include "../push_swap.h"

void	swap_a(t_node **stack)
{
	t_node	*tmp;

	tmp = *stack;
	if (tmp && tmp->n)
	{
		ft_swap(&tmp->v, &tmp->n->v);
		ft_swap(&tmp->i, &tmp->n->i);
		ft_swap(&tmp->b, &tmp->n->b);
		ft_putstr("sa\n");
	}
}
