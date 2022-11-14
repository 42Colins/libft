/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:51:24 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/14 18:34:37 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	index;

	index = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (((size_t)index < dstsize - 1) && (src[index]))
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (ft_strlen(src));
}
/*
int main()
{
	char	dst[15];
	char	src[15];

	printf("%zu\n", ft_strlcpy(dst, "lorem", 15));
	printf("%lu", strlcpy(src, "lorem", 15));
}*/
