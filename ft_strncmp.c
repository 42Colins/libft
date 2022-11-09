/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:17:39 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/09 12:22:21 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	index;

	index = 0;
	if ((size_t)index == n)
		return (0);
	while ((size_t)index <= n)
	{
		if (s1[index] < s2[index])
			return (s1[index] - s2[index]);
		else if (s1[index] > s2[index])
			return (s1[index] + s2[index]);
		else
			return (0);
		index++;
	}
	return (0);
}
