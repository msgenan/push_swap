/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxc <fxc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 06:31:19 by mugenan           #+#    #+#             */
/*   Updated: 2025/03/22 23:43:09 by fxc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	action_pa(t_stack *a, t_stack *b) // (push a) b[first] -> a[first]
{
    t_stack *tmp;

	if(!b || !b->data)
		return ;
	tmp = b;
	ft_lstadd_front(&a, tmp);
	b = b->next;
	ft_lstdelone(tmp);
}

void	action_pb(t_stack *a, t_stack *b) // (push b) a[first] -> b[first]
{
	t_stack *tmp;

	if(!a || !a->data)
		return ;
	tmp = a;
	ft_lstadd_front(&b, tmp);
	a = a->next;
	// ft_lstdelone(tmp);
}
