/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:18:58 by jleon-la          #+#    #+#             */
/*   Updated: 2023/12/15 16:20:25 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*int	main(void)
{
	if (ft_isprint('f') == 0)
	{
		write(1, "No es printable", 15);
	}
	else
	{
		write(1, "Es printable", 12);
	}
	return (0);
}*/

	/*if (c >= 32 && c <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}*/
