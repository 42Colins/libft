/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:12:20 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/15 13:17:38 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	char	*array;
	char	*string;

	array = (char *)s1;
	string = (char *)s2;
	i = 0;
	while ((size_t) i < n)
	{
		if (array[i] != string[i])
			return ((unsigned char)array[i] - (unsigned char)string[i]);
		i++;
	}
	return (0);
}
