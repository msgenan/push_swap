/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 01:00:09 by mugenan           #+#    #+#             */
/*   Updated: 2025/04/13 04:43:43 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	char	**str;

	a = NULL;
	b = NULL;
	if (ac == 1)
		exit(0);
	if ((ac == 2 && !av[1][0]) || check_space(av[1]))
		ft_error();
	str = take_arg(av);
	take_list(&a, str);
	if (check_sorted(a) == 1)
		return (ft_lstclear(&a), 0);
	algorithm(&a, &b);
}
