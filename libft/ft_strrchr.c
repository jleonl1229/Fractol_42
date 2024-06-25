/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:16:23 by jleon-la          #+#    #+#             */
/*   Updated: 2023/12/18 12:27:29 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (*s != '\0')
	{
		counter++;
		s++;
	}
	while (counter >= 0)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		counter--;
		s--;
	}
	return (NULL);
}

/*int	main(void)
{
	printf("%s\n", ft_strrchr("HOLA COMO ESTAS JUANTXA", 'O'));
	printf("%s\n", strrchr("HOLA COMO ESTAS JUANTXA", 'O'));
	return (0);
}*/

//STRCHR (IZQ - DE) - HOLA COMO ESTAS JUANTXO ("O")
//STRCHR - OLA COMO ESTAS JUANTXO

//STRRCHR - (DE - IZQ) - HOLA COMO ESTAS JUANTXO ("O")
//STRRCHR - O
//
