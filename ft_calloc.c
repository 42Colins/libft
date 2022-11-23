/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <cprojean@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:53:52 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/23 11:01:15 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*calloc;
	size_t	total;

	total = size * count;git 
	if (((total) / SIZE_MAX) > 1)
		return (0);
	else if (total == 0)
		total = 1;
	calloc = malloc(total);
	if (calloc == 0)
		return (0);
	ft_bzero(calloc, count);
	return (calloc);
}
