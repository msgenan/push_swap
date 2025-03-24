/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 03:46:16 by mugenan           #+#    #+#             */
/*   Updated: 2025/03/24 08:20:13 by mugenan          ###   ########.fr       */
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
	t_stack *tmp;

	tmp = a;
	while(a->next)
	{
		if(a->data > a->next->data)
		{
			action_sa(a);
			a = tmp;
		}
		else
			a = a->next;
		if(check_sorted(a) == 1)
			return ;
	}		
}
