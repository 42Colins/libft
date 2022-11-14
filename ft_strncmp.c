/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:17:39 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/14 16:36:21 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int		index;
	unsigned char	*array;
	unsigned char	*string;

	array = (unsigned char *)s1;
	string = (unsigned char *)s2;
	index = 0;
	if (n == 0)
		return (0);
	while ((size_t)index <= n)
	{

		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		/*else if (s1[index] > s2[index])
			return (s1[index] - s2[index]);*/
		else
			index++;
	}
	return (0);
}

int main()
{
	const char *s1 = "test\0";
	const char *s2 = "test\200";
	size_t n = 6;

	printf("%d\n", ft_strncmp(s1, s2, n));
	printf("%d", strncmp(s1,s2,n));
}
