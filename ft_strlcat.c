/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:16:00 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/09 12:26:06 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	index;

	index = 0;
	if (dstsize == 0)
		return (index);
	if ((size_t)ft_strlen(dst) < dstsize)
		return (index);
	if ((size_t)ft_strlen(src) < dstsize)
		return (index);
	while ((size_t)index < dstsize)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (index);
}
