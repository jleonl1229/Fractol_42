/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:04:53 by jleon-la          #+#    #+#             */
/*   Updated: 2024/01/03 13:02:49 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*newstring;
	size_t	start;
	size_t	lens1;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	lens1 = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	if (start == lens1 + 1)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[lens1]))
		lens1--;
	newstring = ft_substr(s1, start, lens1 - start + 1);
	if (!newstring)
		return (NULL);
	return (newstring);
}
// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	start;
// 	size_t	end;

// 	start = 0;
// 	while (ft_strchr(set, s1[start]))
// 		start++;
// 	end = ft_strlen(s1);
// 	while (ft_strchr(set, s1[end - 1]))
// 		end--;
// 	return (ft_substr(s1, start, end - start));
// }

// size_t	back(char const *s1, char const *set)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	while (i < ft_strlen(s1))
// 	{
// 		j = 0;
// 		while (set[j] != '\0')
// 		{
// 			if (set[j] != s1[ft_strlen(s1) - i])
// 				return (i);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }

// size_t	front(char const *s1, char const *set)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	while (s1[i] != '\0')
// 	{
// 		j = 0;
// 		while (set[j] != '\0')
// 		{
// 			if (set[j] != s1[i])
// 				return (i);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	start;
// 	size_t	recorrida;

// 	start = front(s1, set);
// 	recorrida = ft_strlen(s1) - start - back(s1, set);
// 	return (ft_substr(s1, start, recorrida));
// }

// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("", ""));
// 	return (0);
// }
