/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicarauj <vicarauj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:13:52 by vicarauj          #+#    #+#             */
/*   Updated: 2026/11/12 09:40:00 by vicarauj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size_t	ft_strlen(const char *s)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		i++;
		j++;
	}
	return (j);
}*/

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (unsigned char)c)
			return (((char *)s) + len);
		len --;
	}
	return (0);
}

/*int main(void)
{
 	char *src = "abbbbbbbb";
 	char *d1 = strrchr(src, 'a');
 	char *d2 = ft_strrchr(src, 'a');

	printf("%s\n", d1);
	printf("%s\n", d2);
	return (0);
}*/