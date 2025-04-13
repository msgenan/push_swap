/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithmic_actions_b.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 22:11:28 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/13 04:39:59 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	most_logical_move(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	int		best_move;
	int		best_index_a;
	int		best_index_b;
	int		tmp_a;

	temp = *a;
	best_move = 2147483647;
	best_index_a = 0;
	best_index_b = 0;
	while (temp)
	{
		tmp_a = move_calculator_a(a, temp->data);
		if (total_move(tmp_a,
				move_calculator_b(b, find_number_b(temp->data, b))) < best_move)
		{
			best_move = total_move(tmp_a,
					move_calculator_b(b, find_number_b(temp->data, b)));
			best_index_a = tmp_a;
			best_index_b = move_calculator_b(b, find_number_b(temp->data, b));
		}
		temp = temp->next;
	}
	push_to_b(a, b, best_index_a, best_index_b);
}

void	push_to_b(t_stack **a, t_stack **b, int index_a, int index_b)
{
	if ((a < 0 && b < 0))
	{
		while ((index_a < 0 && index_b < 0)
			&& (index_a != 0 && index_b != 0))
		{
			action_rrr(a, b);
			index_a++;
			index_b++;
		}	
	}
	if (a > 0 && b > 0)
	{
		while ((index_a > 0 && index_b > 0)
			&& (index_a != 0 && index_b != 0))
		{
			action_rr(a, b);
			index_a--;
			index_b--;
		}
	}
	if (index_a != 0)
		push_one(a, b, index_a, 'a');
	if (index_b != 0)
		push_one(a, b, index_b, 'b');
	action_pb(a, b);
}

void	sort_for_b(t_stack **b)
{
	t_stack	*tmp;
	int		index;

	tmp = *b;
	index = move_calculator_b(b, find_min_value(b));
	while (index != 0)
	{
		if (index > 0)
		{
			action_rb(b, 0);
			index--;
		}
		else
		{
			action_rrb(b, 0);
			index++;
		}
	}
	action_rb(b, 0);
}

int	total_move(int a, int b)
{
	int	abs_a;
	int	abs_b;

	if (a < 0)
		abs_a = -a;
	else
		abs_a = a;
	if (b < 0)
		abs_b = -b;
	else
		abs_b = b;
	if ((a < 0 && b < 0) || (a > 0 && b > 0))
	{
		if (abs_a > abs_b)
			return (abs_a);
		return (abs_b);
	}
	return (abs_a + abs_b);
}
