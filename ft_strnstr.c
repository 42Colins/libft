/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 15:41:24 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/28 16:42:53 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	index;
	int	runner;

	index = 0;
	runner = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)&haystack[0]);
	while (haystack[index])
	{
		while ((haystack[index + runner] == needle[runner])
			&& ((size_t)runner + index < len))
		{
			runner++;
			if (runner == ft_strlen(needle))
				return ((char *)&haystack[index]);
		}
		runner = 0;
		index++;
	}
	return (NULL);
}
