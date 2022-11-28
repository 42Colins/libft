/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <cprojean@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 14:20:43 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/28 17:35:48 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*array;
	t_list	*next_array;

	if (!lst || !f || !del)
		return (NULL);
	array = ft_lstnew(f(lst -> content));
	if (!array)
		return ;
	lst = lst -> next;
	while (lst)
	{
		next_array = ft_lstnew(f(lst -> content));
		if (!next_array)
		{
			ft_lstclear(&array, (del));
			return (NULL);
		}
		ft_lstadd_back(&array, next_array);
		lst = lst -> next;
	}
	return (array);
}
