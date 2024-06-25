/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:54:53 by jleon-la          #+#    #+#             */
/*   Updated: 2024/05/13 14:37:06 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	t;

	i = 0;
	if (needle[i] == '\0')
	{
		return ((char *)&haystack[i]);
	}
	while (haystack[i] && haystack[i] != '\0' && i < len)
	{
		t = 0;
		while (haystack[i + t] == needle[t] && i + t < len)
		{
			t++;
			if (!needle[t])
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	printf("Original: %s", strnstr("<mkeepg`MarioKOKOMa", "ri", 12));
// 	printf("\nFt: %s", ft_strnstr("ozndzofMarioKOKOMa", "ri", 15));
// 	return (0);
// }
