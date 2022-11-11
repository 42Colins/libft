/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:40:38 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/11 11:52:39 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*str;
	char	*array;

	i = 0;
	array = (char *) src;
	str = dst;
	while ((size_t)i < n)
	{
		str[i] = (char)array[i];
		i++;
	}
	return (&str[0]);
}
