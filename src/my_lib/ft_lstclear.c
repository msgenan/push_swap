/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fxc <fxc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:04:35 by mugenan           #+#    #+#             */
/*   Updated: 2025/03/22 23:33:42 by fxc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

void	ft_lstclear(t_stack **lst)
{
	t_stack	*tmp;

	if (!lst)
		return ;
	tmp = (*lst);
	while (tmp != NULL)
	{
		tmp = (*lst)->next;
		(*lst)->data = 0;
		free(*lst);
		(*lst) = tmp;
	}
}
