/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:19:41 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/23 17:01:10 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				runner;
	int				pos;
	unsigned char	character;

	character = c;
	pos = 0;
	runner = 0;
	while (s[runner])
	{
		if (s[runner] == character)
			pos = runner;
		runner++;
	}
	if (character == '\0')
		return ((char *)&s[runner]);
	if (pos == 0 && (s[0] != character))
		return (0);
	else
		return ((char *)&s[pos]);
}
