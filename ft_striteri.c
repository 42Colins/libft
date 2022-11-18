/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:50:19 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/18 17:22:39 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	index;

	index = 0;
	while (s[index])
	{
		f(index, &s[index]);
		index++;
	}
}

// void	fonction(unsigned int i, char*)
// {
// 	c = c + i;
// 	return (c);
// }

// int main()
// {
// 	const char *s = "salut";
// 	printf("%s", ft_strmapi(s, fonction));
// }
