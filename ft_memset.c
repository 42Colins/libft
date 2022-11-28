/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:55:44 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/28 16:41:50 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		index;
	char	*str;

	str = b;
	index = 0;
	while ((size_t)index < len)
	{
		str[index] = c;
		index++;
	}
	return (b);
}
