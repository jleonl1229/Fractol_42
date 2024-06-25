/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:33:42 by jleon-la          #+#    #+#             */
/*   Updated: 2024/03/06 12:01:02 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countstr(char *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	*chargearrs(char *s, char c, size_t *i)
{
	size_t	count;
	char	*string;

	count = 0;
	while (s[*i + count] != c && s[*i + count] != '\0')
		count++;
	string = malloc((count + 1) * sizeof(char));
	if (!string)
		return (NULL);
	count = 0;
	while (s[*i] != c && s[*i] != '\0')
	{
		string[count] = s[*i];
		count++;
		(*i)++;
	}
	while (s[*i] == c && s[*i] != '\0')
		(*i)++;
	string[count] = '\0';
	return (string);
}

void	getfrees(char **memory)
{
	int	i;

	i = 0;
	while (memory[i])
	{
		free(memory[i]);
		i++;
	}
	free(memory);
}

char	**ft_split(char const *s, char c)
{
	size_t	str_count;
	size_t	lap_c;
	size_t	i;
	char	**memory;

	lap_c = 0;
	str_count = countstr((char *)s, c);
	memory = (char **)malloc(sizeof(char *) * (str_count + 1));
	if (!memory || !s)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] == c)
	{
		i++;
	}
	while (str_count > lap_c)
	{
		memory[lap_c] = chargearrs((char *)s, c, &i);
		lap_c++;
	}
	memory[lap_c] = NULL;
	if (!memory)
		getfrees(memory);
	return (memory);
}

// int main(void)
// {
// 	int i = 0;
// 	char **array=NULL;
// 	char const *s="hola     pepe buenas";
// 	array = ft_split(s,' ');
// 	while (array[i] != NULL)
// 	{
// 		printf("[%d]%s\n",i,array[i]);
// 		i++;
// 	}
// 	return (0);
// }

// int main(void)
// {
// 	char	*str;
// 	char	**matrix;
// 	char	c;
// 	int		i;

// 	str = "Hola que tal";
// 	c = ' ';
// 	matrix = ft_split(str, c);
// 	i = 0;
// 	while (matrix[i])
// 	{
// 		printf("INDICE: %s", matrix[i]);
// 	}
// 	printf("INDICE: %s", matrix[i]);
// }
