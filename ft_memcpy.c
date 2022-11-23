/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <cprojean@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 10:40:38 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/22 15:35:50 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*str;
	char	*array;

	if (src == NULL)
		return (NULL);
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
