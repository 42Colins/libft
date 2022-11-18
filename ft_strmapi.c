/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:45:16 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/18 16:45:37 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int		index;
	char				*array;

	array = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!array)
		return (NULL);
	index = 0;
	while (s[index])
	{
		array[index] = f(index, s[index]);
		index++;
	}
	array[index] = '\0';
	return (array);
}

// char	fonction(unsigned int i, char c)
// {
// 	c = c + i;
// 	return (c);
// }

// int main()
// {
// 	const char *s = "salut";
// 	printf("%s", ft_strmapi(s, fonction));
// }
