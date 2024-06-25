/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 11:56:45 by jleon-la          #+#    #+#             */
/*   Updated: 2024/05/19 19:37:21 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void);
int	ft_getchar(char o);
int	ft_getstr(char *o);
int	ft_address(unsigned long long int address, char *base);
int	ft_getunsigned(unsigned int num, char *base);
int	ft_gethex(unsigned int num, char *base);

int	ft_getlong(long num, char *base)
{
	long	i;

	i = 0;
	if (num < 0)
	{
		num = num * (-1);
		write(1, "-", 1);
		i++;
	}
	if (num >= 10)
		i += ft_getlong(num / 10, base);
	return (write(1, &base[num % 10], 1) + i);
}

int	formats(char c, va_list args, int total)
{
	total = 0;
	if (c == 'c')
		total += ft_getchar(va_arg(args, int));
	else if (c == 's')
		total += ft_getstr(va_arg(args, char *));
	else if (c == 'p')
	{
		total += write(1, "0x", 2);
		total += ft_address(va_arg(args, unsigned long int), \
		"0123456789abcdef");
	}
	else if (c == 'x')
		total += ft_gethex(va_arg(args, unsigned int), \
		"0123456789abcdef");
	else if (c == 'X')
		total += ft_gethex(va_arg(args, unsigned int), \
		"0123456789ABCDEF");
	else if (c == 'l')
		total += ft_getlong(va_arg(args, long), "0123456789");
	else if (c == 'u')
		total += ft_getunsigned(va_arg(args, unsigned), "0123456789");
	else if (c == '%')
		total += write(1, "%", 1);
	return (total);
}

int	ft_printf(char const *format, ...)
{
	va_list	args;
	int		total;
	int		i;

	total = 0;
	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			total += formats(format[i], args, total);
		}
		else
			total += write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (total);
}
