/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicarauj <vicarauj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 12:34:20 by vicarauj          #+#    #+#             */
/*   Updated: 2026/11/10 14:09:17 by vicarauj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dp;
	const char	*sp;

	if (src == dest)
		return (dest);
	dp = (char *)dest;
	sp = (const char *)src;
	if (src < dest && src + n > dest)
		while (n--)
			*(dp + n) = *(sp + n);
	else
	{
		while (n--)
		{
			*dp = *sp;
			sp++;
			dp++;
		}
	}
	return (dest);
}
