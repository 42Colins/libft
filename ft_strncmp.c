/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:17:39 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/14 17:44:48 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			index;
	unsigned char	*array;
	unsigned char	*string;

	array = (unsigned char *)s1;
	string = (unsigned char *)s2;
	index = 0;
	if (n == 0)
		return (0);
	while (((array[index]) || (string[index])) && ((size_t) index != n))
	{
		if (array[index] != string[index])
			return ((array[index] + '0') - (string[index] + '0'));
		index++;
	}
	return (0);
}
/*
int main()
{
	const char *s1 = "abcdefgh";
	const char *s2 = "abcdwxyz";
	size_t n = 4;

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d\n", strncmp(s1,s2,n));
}
*/
