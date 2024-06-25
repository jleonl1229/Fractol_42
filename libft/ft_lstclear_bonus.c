/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jleon-la <jleon-la@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 10:55:41 by jleon-la          #+#    #+#             */
/*   Updated: 2024/01/11 11:09:47 by jleon-la         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*con;

	if (lst && del)
	{
		while (*lst)
		{
			con = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = con;
		}
	}
}
