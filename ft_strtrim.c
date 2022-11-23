/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 14:04:33 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/23 18:52:56 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_trim_st(char const s1, char const *set)
{
	int	runner;

	runner = 0;
	while (set[runner])
	{
		if (set[runner] == s1)
			return (1);
		runner++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	runner;
	int	count;
	int	size;
	int	index;

	count = 0;
	index = 0;
	runner = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[index] && (ft_trim_st(s1[index], set) == 1))
	{
		count++;
		index++;
	}
	index = 0;
	while (s1[runner] && (ft_trim_st(s1[runner], set) == 1))
	{
		runner--;
		index++;
	}
	size = ((ft_strlen(s1) - (count + index)));
	if (runner == 0)
		size = 0;
	return (ft_substr(s1, count, size));
}

 int main()
 {
 	char const *s1 = "";
 	char const *set = "";
 	printf("%s", ft_strtrim(s1, set));
 }
