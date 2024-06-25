/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:11:17 by jleon-la          #+#    #+#             */
/*   Updated: 2024/05/19 19:36:59 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*memory;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	while (i < start)
		i++;
	memory = malloc(sizeof(char) * (len + 1));
	if (!memory)
		return (NULL);
	while (s && len && j < len)
	{
		memory[j] = s[i];
		i++;
		j++;
	}
	memory[j] = '\0';
	return (memory);
}

// int	main(void)
// {
// 	printf("%s", ft_substr("keep coding", 2, 4));
// 	return (0);
// }
//Aqui la cosa es que me devuelva tanos los caracteres
// como diga len pero a partir de start en el string s

//ft_strlcpy(memory, s, len);

//Hay que hacerlo con strdup porque nos tiene que
//  reservar el byte que ocupa la \0