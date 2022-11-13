/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:51:10 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/13 16:49:34 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	runner;

	runner = 0;
	while (s[runner] != '\0')
	{
		if (s[runner] == c)
			return ((char *)&s[runner]);
		runner++;
	}
	return (0);
}
