/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicarauj <vicarauj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:16:18 by vicarauj          #+#    #+#             */
/*   Updated: 2026/11/12 10:29:33 by vicarauj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t s)
{
	size_t	i;
	size_t	srclen;

	srclen = ft_strlen((char *)src);
	i = 0;
	if (s == 0)
		return (srclen);
	if (s > 0)
	{
		while (src[i] != '\0' && i < (s - 1))
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (srclen);
}

/*int	main(void)
{
	char	*b;

	b = "";
	printf("%ld\n", ft_strlcpy(b, "lorem ipsum dolor sit amet", 0));

	return (0);
}*/