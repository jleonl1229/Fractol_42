/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:00:16 by jleon-la          #+#    #+#             */
/*   Updated: 2024/01/11 18:11:54 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_i;
	size_t	dst_i;
	size_t	index;

	if (!dstsize)
		return (ft_strlen(src) + dstsize);
	src_i = ft_strlen(src);
	index = 0;
	while (dst[index] && index < dstsize)
		index++;
	dst_i = index;
	while (src[index - dst_i] && index < dstsize - 1)
	{
		dst[index] = src[index - dst_i];
		index++;
	}
	if (dst_i < dstsize)
		dst[index] = '\0';
	return (dst_i + src_i);
}

// int	main(void)
// {
// 	printf("FT: %lu ", ft_strlcat("pqrstuvwxyz", "abcd", 1));
// 	return (0);
// }
