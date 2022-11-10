/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:40:38 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/10 13:52:41 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		runner;
	int		index;
	int		i;
	char	*str;
	char	*array;

	i = 0;
	array = (char	*)src;
	str = dst;
	runner = ft_strlen(dst);
	index = ft_strlen(src);
	while ((size_t)i < n)
	{
		str[runner] = (char)array[index];
		runner--;
		index--;
		i++;
	}
	return (&str[0]);
}
