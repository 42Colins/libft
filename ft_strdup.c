/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <cprojean@42lyon.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 16:15:30 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/15 10:42:38 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	int		runner;
	char	*dup;

	runner = 0;
	size = ft_strlen(s1);
	dup = malloc(sizeof(char) * size + 1);
	if (dup == 0)
		return (0);
	while (runner <= size)
	{
		dup[runner] = s1[runner];
		runner++;
	}
	return (dup);
}
