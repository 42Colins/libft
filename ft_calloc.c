/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 12:53:52 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/23 16:13:31 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*calloc;
	size_t	total;

	total = size * count;
	if (count != 0 && (SIZE_MAX / count) < size)
		return (NULL);
	calloc = malloc(total);
	if (!calloc)
		return (0);
	ft_bzero(calloc, total);
	return (calloc);
}
