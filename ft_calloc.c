/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:53:52 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/23 11:07:23 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*calloc;
	size_t	total;

	total = size * count;
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
