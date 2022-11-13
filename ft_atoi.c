/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:07:22 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/13 16:51:32 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		index;
	int		count;
	int		answer;

	answer = 0;
	count = 0;
	index = 0;
	while ((9 <= str[index] && str[index] <= 13) || (str[index] == 32))
		index++;
	while ((str[index] == '+') || (str[index] == '-'))
	{
		if (str[index] == '-')
			count++;
		index++;
	}
	while ('0' <= str[index] && str[index] <= '9')
	{
		answer = answer * 10 + str[index];
		index++;
	}
	if (count % 2 != 0)
		answer = answer * -1;
	return (answer);
}
