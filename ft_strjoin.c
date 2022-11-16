/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:52:31 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/16 14:03:44 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		sizearray;
	int		sizestring;
	int		runner;
	char	*array;

	runner = 0;
	sizearray = ft_strlen(s1);
	sizestring = ft_strlen(s2);
	array = malloc(sizeof(char) * (sizearray + sizestring) + 1);
	while (runner < sizearray)
	{
		array[runner] = s1[runner];
		runner++;
	}
	runner = 0;
	while (runner < sizestring)
	{
		array[runner + sizearray] = s2[runner];
		runner++;
	}
	array[runner + sizearray] = '\0';
	return (array);
}
/*
int main()
{
	const char *s1 = "salutcava";
	const char *s2 = "superettoi";

	printf("%s", ft_strjoin(s1, s2));
}*/
