/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 09:57:04 by jleon-la          #+#    #+#             */
/*   Updated: 2024/01/05 10:22:53 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*memory;

	i = 0;
	memory = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!memory)
		return (NULL);
	while (s[i] && s[i] != '\0')
	{
		memory[i] = f(i, s[i]);
		i++;
	}
	memory[i] = '\0';
	return (memory);
}

// int	main(void)
// {
// 	ft_strmapi("Hola", (char (*f)(unsigned int, char)));
// 	return (0);
// }
