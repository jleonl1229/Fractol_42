/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:34:58 by jleon-la          #+#    #+#             */
/*   Updated: 2024/01/11 15:48:54 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*memory;
	size_t	leng;

	leng = len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	memory = malloc(sizeof(char) * (leng + 1));
	if (!memory)
		return (NULL);
	if (n < 0)
	{
		memory[0] = '-';
		n = n * -1;
	}
	memory[leng] = '\0';
	while (n != 0)
	{
		memory[--leng] = (n % 10) + '0';
		n = n / 10;
	}
	return (memory);
}

// int	main(void)
// {
// 	printf("%s", ft_itoa(0));
// 	return (0);
// }
