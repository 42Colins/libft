/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:16:00 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/14 17:46:48 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	index;
	int	start;

	start = ft_strlen(dst);
	index = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	if ((size_t)ft_strlen(dst) - 1 + (size_t)ft_strlen(src) < dstsize)
		return (index);
	while ((size_t)index < dstsize)
	{
		dst[start] = src[index];
		index++;
		start++;
	}
	dst[index] = '\0';
	return (index);
}
/*
int main()
{
	char 	*dst = "a";
	char	*dest= "a";
	const char *str = "cava";
	size_t	dstsize = 5;

	printf("%zu\n",ft_strlcat(dst, str, dstsize));
	printf("%s\n", dst);
	printf("%zu\n", strlcat(dest, str, dstsize));
	printf("%s\n", dest);
}
*/
