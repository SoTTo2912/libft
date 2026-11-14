/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicarauj <vicarauj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 09:40:25 by vicarauj          #+#    #+#             */
/*   Updated: 2026/11/14 09:46:32 by vicarauj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*i;

	if (!lst || !new)
	{
		return ;
	}
	i = *lst;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	else
	{
		while (i->next != NULL)
		{
			i = i->next;
		}
		i->next = new;
	}
}
