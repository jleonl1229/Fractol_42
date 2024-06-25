/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 11:57:40 by jleon-la          #+#    #+#             */
/*   Updated: 2024/01/09 10:44:42 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*int	main(void)
{
	if ((ft_isalpha('j') == 0))
	{
		write(1, "Its not alfabetic", 17);
	}
	else
	{
		write(1, "Its alfabetic", 13);
	}
	return (0);
}*/
