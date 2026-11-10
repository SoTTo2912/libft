/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicarauj <vicarauj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:19:53 by vicarauj          #+#    #+#             */
/*   Updated: 2026/11/10 17:33:59 by vicarauj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	slen;
	size_t	i;

	slen = ft_strlen(s);
	if (slen <= start)
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = malloc (len + 1 * sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len && start + i < slen)
	{
		substr[i] = s[start + i];
		i++;
	}
	ft_strlcpy(substr, s, len);
	return (substr);
}
