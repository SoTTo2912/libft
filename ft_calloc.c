/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicarauj <vicarauj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 10:57:40 by vicarauj          #+#    #+#             */
/*   Updated: 2026/11/10 13:33:49 by vicarauj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;

	r = malloc(count * size);
	if (!r)
		return (NULL);
	ft_bzero(r, size * count);
	return (r);
}
