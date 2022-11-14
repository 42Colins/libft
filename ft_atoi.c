/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:07:22 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/14 11:07:43 by cprojean         ###   ########.fr       */
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
	while ((9 <= str[index] && str[index] <= 13) || (str[index] == ' '))
		index++;
	if (str[index] == '-')
		count++;
	else if (str[index] == '+')
		index++;
	while ('0' <= str[index] && str[index] <= '9')
	{
		answer = answer * 10 + str[index] - 48;
		index++;
	}
	if (count % 2 == 0)
		return (answer);
	return (-answer);
}
