/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:54:32 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/23 17:02:05 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*array;
	unsigned char	cast;

	cast = (unsigned char) c;
	array = (unsigned char *) s;
	i = 0;
	while ((size_t) i < n)
	{
		if (array[i] == cast)
			return (&array[i]);
		i++;
	}
	return (NULL);
}

// int main ()
// {
// 	char s[7] = {0, 1, 2 ,3 ,4 ,5};

// 	// if (ft_memchr(s, 2 + 256, 3) == NULL)
// 	// 	printf("NULL\n");
// 	printf("%p\n", ft_memchr(s, 258, 3));
// 	if (memchr(s, 2 + 256, 3) == NULL)
// 		printf("NULL\n");
// 	printf("%p\n", memchr(s, 258, 3));
// }
