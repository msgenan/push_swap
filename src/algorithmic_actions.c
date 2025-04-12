/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithmic_actions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 00:23:44 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/12 16:36:21 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    push_logical_to_b(t_stack **a, t_stack **b, int index_a, int index_b)
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

// void	push_to_last_position(t_stack **a, t_stack **b)
// {
// 	t_stack *temp;
// 	int	move;
// 	int	index_a;
// 	int	index_b;
// 	int bestmove;
	
// 	bestmove = 2147483647;
// 	temp = *a;
// 	while(temp)
// 	{
		
// 	}
// }

int	find_number_a(int data, t_stack **a)
{
	int		candidate;
	int		min;
	int		max;
	t_stack	*temp;

	candidate = -2147483648;
	max = find_max_value(a);
	min = find_min_value(a);
	if (data > max || data < min)
		return (max);
	temp = *a;
	while (temp)
	{
		if (temp->data < data && temp->data > candidate)
			candidate = temp->data;
		temp = temp->next;
	}
	return (candidate);
}

void	push_logical_move_a(t_stack **a, t_stack **b, int index_a, int index_b)
{
	while (index_b > 0 && index_b--)
		action_rb(b);
	while (index_b < 0 && index_b++)
		action_rrb(b);
	while (index_a > 0 && index_a--)
		action_ra(a);
	while (index_a < 0 && index_a++)
		action_rra(a);
	action_pa(a, b);
}

void	most_logical_move_b_to_a(t_stack **a, t_stack **b)
{
	int		candidate_a;
	int		candidate_b;
	int		best_move;
	int		move;
	int		index_a;
	int		index_b;
	t_stack	*temp;
	int		temp_candidate;

	best_move = 2147483647;
	candidate_a = 0;
	candidate_b = 0;
	temp = *b;
	while (temp)
	{
		temp_candidate = find_number_a(temp->data, a);
		index_b = move_calculator_b(b, temp->data);
		index_a = move_calculator_a(a, temp_candidate);
		move = total_move(index_a, index_b);
		if (move < best_move)
		{
			best_move = move;
			candidate_b = temp->data;
			candidate_a = temp_candidate;
		}
		temp = temp->next;
	}
	index_b = move_calculator_b(b, candidate_b);
	index_a = move_calculator_a(a, candidate_a);
	push_logical_move_a(a, b, index_a, index_b);
}

int	get_index(t_stack *node, t_stack *stack)
{
	int	index;
	t_stack	*current;

	index = 0;
	current = stack;
	while (current)
	{
		if (current == node)
			return (index);
		current = current->next;
		index++;
	}
	return (-1);
}

void compare_first_last(t_stack **a)
{
    int size;
    int mid;
    int index;

    size = ft_lstsize(*a);
    mid = size / 2;
    index = get_index(*a, (*a));
    if (index < mid)
        action_ra(a);
    else
        action_rra(a);
}