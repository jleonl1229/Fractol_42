/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:54:22 by jleon-la          #+#    #+#             */
/*   Updated: 2023/12/19 17:32:27 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t					i;
	const unsigned char		*b;

	i = 0;
	while (i < n)
	{
		b = s;
		if (((const unsigned char)*b) == ((unsigned char)c))
		{
			return ((void *)s);
		}
		i++;
		s++;
	}
	return (NULL);
}

/*int	main(void)
{
	printf("Original: %s", memchr("jaimito", 97, 3));
	printf("\nFT: %s", ft_memchr("jaimito", 97, 3));
	return (0);
}*/
