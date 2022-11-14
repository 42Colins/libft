/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cprojean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:54:32 by cprojean          #+#    #+#             */
/*   Updated: 2022/11/14 11:20:30 by cprojean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*array;

	array = (char *)s;
	i = 0;
	while (((size_t) i < n) && (array[i] != '\0'))
	{
		if (array[i] == c)
			return (&array[i]);
		i++;
	}
	return (NULL);
}

/*void	print(const char *s)
{
	int	size;

	size = 0;
	while (s[size])
		size++;
	write(1, s, size);
}

int main ()
{
	const char *stt;
	const char *sttr;

	sttr = memchr("bonjourno", 'n', 2);
	stt = ft_memchr("bonjourno", 'n', 2);
	if (!stt)
		print("ERROR");
	else
	{
		print (stt);
		print ("\n");
	}
	if (!sttr)
		print ("ERROR");
	else
		print (sttr);
}
*/
