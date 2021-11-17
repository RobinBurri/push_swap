/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 17:26:23 by rburri            #+#    #+#             */
/*   Updated: 2021/11/17 16:56:01 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_stack	a;
	t_stack	b;
	int		ret;

	a = NULL;
	b = NULL;
	ret = ft_check_and_load(argc, argv, &a);
	if (ret != 0)
		return (1);
	ft_print_stack(&a);
	ft_putchar('-');
	ft_putchar('\n');
	ft_sort_small(&a, &b);
	ft_print_stack(&a);
	ft_putchar('-');
	ft_putchar('\n');
	return (0);
}

void	ft_print_stack(t_stack *mystack)
{
	t_node	*tmp;

	tmp = *mystack;
	while (tmp != NULL)
	{
		ft_putnbr(tmp->v);
		ft_putchar('\n');
		tmp = tmp->n;
	}
}
// int len;
// len = ft_stklen(&a);