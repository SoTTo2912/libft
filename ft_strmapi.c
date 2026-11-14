/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicarauj <vicarauj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 13:47:30 by vicarauj          #+#    #+#             */
/*   Updated: 2026/11/14 09:51:23 by vicarauj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*p;
	int		i;
	int		slen;

	i = -1;
	slen = ft_strlen(s);
	p = malloc(slen + 1);
	if (!p)
		return (NULL);
	while (++i < slen && s[i])
		p[i] = f((unsigned int)i, s[i]);
	p[i] = '\0';
	return (p);
}
