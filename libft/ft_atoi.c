/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 16:30:56 by jleon-la          #+#    #+#             */
/*   Updated: 2024/01/08 11:59:53 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign);
}

/* #include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	a;
	int	dst;

	i = 0;
	dst = 0;
	while (str[i] && str[i] != '\0')
	{
		if (i == " " || i == "\t" || i == "\n" || i == "\f" || i == )
		{
			i++;
		}
		if (str[i] == '-')
		{
			a = 1;
			i++;
		}
		while (ft_isdigit(str[i]))
		{
			dst = dst * 10 + (str[i] - '0');
			i++;
		}
		
	}
	return (dst);
}
*/

// int main (void)
// {
// 	const char *s = "\tggj-100aèfkzñ34";
// 	int i;
// 	i = ft_atoi (s);
// 	printf ("%d\n", i);
// }
