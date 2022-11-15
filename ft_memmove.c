/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <cprojean@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:30:09 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/15 11:51:54 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		i;
	char	*str;
	char	*array;

	i = len;
	array = (char *) src;
	str = dst;
	if (src < dst){
		while (i > 0)
		{
			str[i - 1] = (char)array[i - 1];
			i--;
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
/*
int main()
{
	void *dst;
	const void *src;
	size_t len;

	len = 15;
	dst = "conjecteture";
	printf("%p", ft_memmove(dst, src, len));
}*/

