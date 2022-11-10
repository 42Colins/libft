/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:07:22 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/09 12:18:12 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	index;
	int	count;
	int	answer;

	answer = 0;
	count = 0;
	index = 0;
	while (str[index] == '+' || str[index] == '-')
		if (str[index] == '-')
			count++;
		index++;
	while ('0' <= str[index] && str[index] <= '9')
		answer = answer * 10 + str[index];
	if (count % 2 != 0)
		answer = answer * -1;
	return (answer);
}