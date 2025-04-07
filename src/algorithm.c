/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 03:46:16 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/07 13:21:39 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sorted(t_stack *a)
{
	while(a->next)
	{
		if(a->data > a->next->data)
			return(0);
		a = a->next;
	}
	return (1);
}

void	sort_for_three(t_stack *a)
{
	if(a->data < a->next->data)
	{
		if(a->data < a->next->next->data)
		{
			action_rra(&a);
			action_sa(a);
		}
		else
			action_rra(&a);
	}
	else
	{
		if(a->next->data > a->next->next->data)
		{
			action_ra(&a);
			action_sa(a);
		}
		else
		{
			if(a->data > a->next->next->data)
				action_ra(&a);
			else
				action_sa(a);
		}
	}
}

void	algorithm(t_stack *a, t_stack *b)
{
	action_pb(&a, &b);
	if(ft_lstsize(a) <= 3)
		return(sort_for_three(a), exit(0));
	action_pb()
	
}
