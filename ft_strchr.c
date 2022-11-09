/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:51:10 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/09 12:18:36 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strchr(const char *s, int c)
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
