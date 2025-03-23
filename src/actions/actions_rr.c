/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxc <fxc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 06:41:15 by mugenan           #+#    #+#             */
/*   Updated: 2025/03/22 22:54:18 by fxc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    action_rra(t_stack *a) // a[last] -> a[first]
{
    
}

void    action_rrb(t_stack *b) // b[last] -> b[first]
{
    
}

void    action_rrr(t_stack *a, t_stack *b) // (rra) (rrb)
{
    action_rra(a);
    action_rrb(b);
}