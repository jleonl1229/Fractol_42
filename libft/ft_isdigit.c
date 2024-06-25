/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:57:40 by jleon-la          #+#    #+#             */
/*   Updated: 2024/01/09 10:48:50 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

/*int	main(void)
{
	if ((ft_isdigit('a') == 0))
	{
		write(1, "Its not a digit", 15);
	}
	else
	{
		write(1, "Its a digit", 11);
	}
	return (0);
}*/
