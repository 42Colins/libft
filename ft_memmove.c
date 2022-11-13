/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 14:30:09 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/13 15:13:26 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		runner;
	int		index;
	int		i;
	char	*str;
	char	*array;

	i = 0;
	array = (char *) src;
	str = dst;
	runner = ft_strlen(dst);
	index = ft_strlen(src);
	while ((size_t)i < len)
	{
		if (dst < src)
			str[runner] = (char)array[index];
		else
			str[i] = (char)array[runner];
		runner--;
		index--;
		i++;
	}
	return (&str[0]);
}
