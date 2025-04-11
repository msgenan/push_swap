/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithmic_actions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 00:23:44 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/11 01:12:58 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_logical_move_b(t_stack **a, t_stack **b, int index_a, int index_b)
{
	if ((a < 0 && b < 0) || (a > 0 && b > 0))
		push_together(a, b, index_a, index_b);
	if(index_a != 0)
		push_one(a, b, index_a, 'a');
	if(index_b != 0)
		push_one(a, b, index_b, 'b');
	action_pb(a, b);
}

void	push_together(t_stack **a, t_stack **b, int index_a, int index_b)
{
	while((index_a < 0 && index_b < 0)
		&& (index_a != 0 && index_b != 0))
	{
		action_rrr(a, b);
		index_a++;
		index_b++;
	}
	while(index_a > 0 && index_b > 0
		&& (index_a != 0 && index_b != 0))
	{
		action_rr(a, b);
		index_a--;
		index_b--;
	}
}

void	push_one(t_stack **a, t_stack **b, int index, char flag)
{
	while(index != 0)
	{
		if(index < 0 && flag == 'a')
		{
			action_rra(a);
			index++;
		}
		else if(index > 0 && flag == 'a')
		{
			action_ra(a);
			index--;
		}
		else if(index < 0 && flag == 'b')
		{
			action_rrb(b);
			index++;
		}
		else if(index > 0 && flag == 'b')
		{
			action_rb(b);
			index--;
		}	
	}
}
