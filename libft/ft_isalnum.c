/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 19:26:30 by jleon-la          #+#    #+#             */
/*   Updated: 2024/01/09 11:47:26 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (!(!ft_isalpha(c) && !ft_isdigit(c)));
}

/*int main(void)
{
	if (ft_isalnum('?') == 1)
	{
		write(1, "true", 4);
	}
	else
	{
		write(1, "false", 5);
	}
	return (0);
	return (!(!ft_isalpha(c) && !ft_isdigit(c)));
	return (ft_isalpha(c) || ft_isdigit(c));
}*/
