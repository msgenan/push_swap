/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 03:46:16 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/11 04:44:58 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algorithm(t_stack **a, t_stack **b)
{ 
	if(ft_lstsize(*a) <= 3)
		return(sort_for_three(*a), exit(0));
	action_pb(a, b);
	if(ft_lstsize(*a) > 3)
		action_pb(a, b);
	while(ft_lstsize(*a) > 3)
		most_logical_move(a, b);
	print_list(*a, 'a');
	print_list(*b, 'b');

}

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

void	most_logical_move(t_stack **a, t_stack **b)
{
	int			candidate_a;
	int			candidate_b;
	int			move;
	int			index_a;
	int			index_b;
	int			best_move;
	t_stack		*temp;
	int			temp_candidate_b;

	best_move = 2147483647;
	candidate_a = 0;
	candidate_b = 0;
	temp = *a;
	while (temp)
	{
		temp_candidate_b = find_number_b(temp->data, b);
		index_a = move_calculator_a(a, temp->data);
		index_b = move_calculator_b(b, temp_candidate_b);
		move = total_move(index_a, index_b);
		if (move < best_move)
		{
			best_move = move;
			candidate_a = temp->data;
			candidate_b = temp_candidate_b;
		}
		temp = temp->next;
	}
	index_a = move_calculator_a(a, candidate_a);
	index_b = move_calculator_b(b, candidate_b);
	push_logical_move_b(a, b, index_a, index_b);
}



int	total_move(int a, int b)
{
	if(a < 0)
		a *= -1;
	if(b < 0)
		b *= -1;
	return(a + b);
}
