/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 15:05:48 by jleon-la          #+#    #+#             */
/*   Updated: 2023/12/26 16:02:05 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		i;
	char		*memory;

	memory = malloc((ft_strlen(s1) + 1) * sizeof(char));
	i = 0;
	if (!memory)
		return (0);
	while (i < ft_strlen(s1))
	{
		memory[i] = s1[i];
		i++;
	}
	memory[i] = '\0';
	return (memory);
}

// int	main(void)
// {
// 	printf("%s", ft_strdup("urduliz"));
// 	return (0);
// }
