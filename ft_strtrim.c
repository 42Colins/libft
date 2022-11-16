/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:04:33 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/16 16:37:44 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	index;
	int	runner;
	int	checkpoint;
	int	size;

	index = 0;
	checkpoint = ft_strlen(set);
	runner = ft_strlen(s1);
	while (set[index])
	{
		index++;
	}
	while (s1[runner] == set[checkpoint])
	{
		runner--;
		checkpoint--;
	}
	size = (ft_strlen(s1) - ((ft_strlen(s1) - runner + index)) + 1);
	return (ft_substr(s1, index, size));
}

int main()
{
	char const *s1 = " x bonjourcava x ";
	char const *set = "   x";
	printf("%s", ft_strtrim(s1, set));
}
