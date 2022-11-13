/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:19:41 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/13 16:49:43 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	runner;
	int	pos;

	pos = 0;
	runner = 0;
	while (s[runner] != '\0')
	{
		if (s[runner] == c)
			pos = runner;
		runner++;
	}
	if (pos == 0 && (s[0] != c))
		return (0);
	else
		return ((char *)&s[pos]);
}
