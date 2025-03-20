/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 05:17:43 by mugenan           #+#    #+#             */
/*   Updated: 2025/03/20 21:05:19 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "my_lib.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*list;
	int		i;

	list = lst;
	i = 0;
	while (list != NULL)
	{
		i++;
		list = list->next;
	}
	return (i);
}
