/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 06:35:02 by mugenan           #+#    #+#             */
/*   Updated: 2025/03/24 00:43:29 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    action_ra(t_stack **a) // a[first] -> a[last]
{
    t_stack *new;
    t_stack *tmp;

    if(!a || !*a)
        return ;
    new = ft_lstnew((*a)->data);
    tmp = *a;
    *a = tmp->next;
    ft_lstdelone(tmp);
   ft_lstadd_back(a, new);
}

void    action_rb(t_stack **b) // b[first] -> a[last]
{
    t_stack *new;
    t_stack *tmp;

    if(!b || !*b)
        return ;
    new = ft_lstnew((*b)->data);
    tmp = *b;
    *b = tmp->next;
    ft_lstdelone(tmp);
   ft_lstadd_back(b, new);
}

void    action_rr(t_stack **a, t_stack **b) // (ra) (rb)
{
    action_ra(a);
    action_rb(b);
}