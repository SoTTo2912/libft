/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicarauj <vicarauj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 09:41:54 by vicarauj          #+#    #+#             */
/*   Updated: 2026/11/14 09:42:43 by vicarauj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	t_list			*i;
	unsigned int	counter;

	i = lst;
	counter = 0;
	while (i != NULL)
	{
		counter++;
		i = i->next;
	}
	return (counter);
}
