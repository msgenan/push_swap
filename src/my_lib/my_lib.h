/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mugenan <mugenan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:17:27 by mugenan           #+#    #+#             */
/*   Updated: 2025/03/24 00:19:29 by mugenan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_LIB_H
# define MY_LIB_H
# include <stdlib.h>

typedef struct s_stack
{
	int			data;
	struct s_stack	*next;
}					t_stack;


int		ft_lstsize(t_stack *lst);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *c, unsigned int start, size_t len);
void	ft_lstclear(t_stack **lst);
void	ft_lstdelone(t_stack *lst);
void	ft_lstadd_front(t_stack **lst, t_stack *new);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack	*ft_lstlast(t_stack *lst);
size_t	ft_strlen(const char *s);
t_stack *ft_lstnew(int data);


#endif