/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 23:08:14 by mugenan           #+#    #+#             */
/*   Updated: 2025/03/24 01:06:09 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

t_stack *ft_lstnew(int data)
{
    t_stack *node;

    node = malloc(sizeof(t_stack));
    if(!node)
        return(0);
    node->data = data;
    node->next = NULL;
    return(node);
}
