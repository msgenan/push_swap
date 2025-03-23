/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxc <fxc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 23:08:14 by mugenan           #+#    #+#             */
/*   Updated: 2025/03/22 23:07:38 by fxc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

t_stack *new_node(int data)
{
    t_stack *node;

    node = malloc(sizeof(t_stack));
    if(!node)
        return(0);
    node->data = data;
    node->next = NULL;
    return(node);
}
