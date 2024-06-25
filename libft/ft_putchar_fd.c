/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:18:24 by jleon-la          #+#    #+#             */
/*   Updated: 2023/12/28 12:38:00 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int	main(void)
// {
// 	ft_putchar_fd('c', 1);
// 	return (0);
// }

// #include <fcntl.h>//libreria para usar open
// int	main(void)
// {
// 	int fd= open("nnn",O_WRONLY);
// 	return 0;
// }