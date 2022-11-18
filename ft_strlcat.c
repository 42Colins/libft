/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 18:07:13 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/15 18:14:28 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	index;
	int	start;
	int	returnval;

	index = 0;
	returnval = ft_strlen(dst) + ft_strlen(src);
	start = ft_strlen(dst);
	if ((dstsize == 0) || ((size_t)start >= dstsize))
		return (returnval);
	while ((size_t)start + index < dstsize)
	{
		dst[start + index] = src[index];
		index++;
	}
	dst[start + index + 1] = '\0';
	return (returnval);
}*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int		index;
	size_t	start;

	index = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	start = ft_strlen(dst);
	if (start >= dstsize)
		return (start + ft_strlen(src));
	while ((start + index < dstsize - 1) && (src[index] != '\0'))
	{
		dst[start + index] = src[index];
		index++;
	}
	dst[index + start] = '\0';
	return (start + ft_strlen(src));
}
/*
int main()
{
	char 	dst[100] = "a";
	char	dest[100]= "a";
	const char *str = "lorem ipsum dolor sit amet";
	size_t	dstsize = 99;

	printf("%zu\n",ft_strlcat(dst, str, dstsize));
	printf("%s\n", dst);
	printf("%zu\n", strlcat(dest, str, dstsize));
	printf("%s\n", dest);
}*/
