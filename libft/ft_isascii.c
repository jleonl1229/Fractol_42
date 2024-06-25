/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 09:29:52 by jleon-la          #+#    #+#             */
/*   Updated: 2024/01/09 10:47:29 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int	main(void)
{
	if(ft_isascii('A') == 0)
	{
		write(1, "No es ascii", 11);
	}
	else
	{
		write(1, "Es ascii", 8);
	}
	return (0);
}*/
//comohacerunarecetaparahacer.o=> https://www.youtube.com/watch?v=0XlVyZAfQEM