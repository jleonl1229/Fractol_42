/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:40:18 by jleon-la          #+#    #+#             */
/*   Updated: 2023/12/23 20:16:14 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	memory = (char *)malloc(count * size);
	if (memory == NULL)
		return (NULL);
	while (i < size * count)
	{
		(memory)[i] = 0;
		i++;
	}
	return (memory);
}
// 12345678
/* 	return (ft_memset(memory, 0, (count * size))); */
/* 	while (i < count)
	{
		memory[i] = 0;
		i++;
	} */
	/* return ((void *)memory); */

// int	main(void)
// {
// 	size_t	*ptr = (size_t *)ft_calloc(10, sizeof(char *));

// 	if (ptr == NULL)
// 	{
// 		fprintf(stderr, "Error al asignar memoria en el heap\n");
// 		return (1);
// 	}
// 	free(ptr);
// 	char c = (char)(i + '0');
// 	return (0);
// }
