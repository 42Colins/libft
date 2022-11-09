/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:23:30 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/09 12:20:45 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	index;
	int	runner;

	index = 0;
	runner = 0;
	while (haystack[index] != '\0')
	{
		while (haystack[index] == needle[runner] && needle[runner] != '\0'
			&& (size_t)index <= len)
		{
			index++;
			runner++;
		}
		if (runner == ft_strlen(needle))
			return ((char *)&haystack[runner]);
		index++;
	}
	return (0);
}
