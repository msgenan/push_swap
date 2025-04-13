/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 06:10:11 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/13 03:17:14 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    action_sa(t_stack *a, int flag) //(swap a) 1 -> 2 || 2 -> 1
{
    t_stack *tmp;
    int data;

    if(!a || !a->next)
        return ;
    data = a->data;
    tmp = a;
    tmp = tmp->next;
    a->data = tmp->data;
    tmp->data = data;
    if(!flag)
	    actions_message("sa");
}

void    action_sb(t_stack *b, int flag) //(swap b) 1 -> 2 || 2 -> 1
{
    t_stack *tmp;
    int data;

    if(!b || !b->next)
        return ;
    data = b->data;
    tmp = b;
    tmp = tmp->next;
    b->data = tmp->data;
    tmp->data = data;
    if(!flag)
	    actions_message("sb");
}

void    action_ss(t_stack *a, t_stack *b) //(swap a) (swap b)
{
    action_sa(a, 1);
    action_sb(b, 1);
	actions_message("ss");
}