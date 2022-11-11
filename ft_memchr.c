/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:54:32 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/11 13:08:25 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*array;

	array = (char *)s;
	i = 0;
	while (((size_t) i <= n) && (array[i] != '\0'))
	{
		if (array[i] == c)
			return (&array[i]);
		i++;
	}
	return (NULL);
}
