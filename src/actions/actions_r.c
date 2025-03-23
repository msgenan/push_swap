/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_r.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxc <fxc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 06:35:02 by mugenan           #+#    #+#             */
/*   Updated: 2025/03/22 22:54:16 by fxc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    action_ra(t_stack *a) // a[first] -> a[last]
{
    
}

void    action_rb(t_stack *b) // b[first] -> a[last]
{
    
}

void    action_rr(t_stack *a, t_stack *b) // (ra) (rb)
{
    action_ra(a);
    action_rb(b);
}