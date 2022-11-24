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
	if (start > dstsize)
		return (ft_strlen(src) + dstsize);
	while ((start + index < dstsize - 1) && (src[index] != '\0'))
	{
		dst[start + index] = src[index];
		index++;
	}
	dst[index + start] = '\0';
	return (start + ft_strlen(src));
}

// int main()
// {
// 	char 	dst[100] = "abcd";
// 	char	dest[100]= "abcd";
// 	const char *str = "pqrstuvwxyz";
// 	size_t	dstsize = 0;
// 	while (dstsize < 11)
// 	{
// 		printf("MINE :%zu\n",ft_strlcat(dst, str, dstsize));
// 		printf("MINE :%s\n", dst);
// 		printf("OFFI :%zu\n", strlcat(dest, str, dstsize));
// 		printf("OFFI :%s\n", dest);
// 		printf("--------------------\n");
// 		dstsize++;
// 	}
// }
