/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:29:23 by jleon-la          #+#    #+#             */
/*   Updated: 2024/01/11 16:08:29 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}

// void	ft_putnbr_fd(int n, int fd)
// {
// 	char	*s;

// 	s = "0123456789";
// 	if (n == -2147483648)
// 	{
// 		write(fd, "-2147483648", 11);
// 		return ;
// 	}
// 	else if (n < 0)
// 	{
// 		n = n * -1;
// 		write(1, "-", 1);
// 	}
// 	else if (n > 9)
// 		ft_putnbr_fd(n / 10, fd);
// 	write(fd, &s[n % 10], 1);
// }

// int	main(void)
// {
// 	ft_putnbr_fd(-5, 2);
// 	return (0);
// }
