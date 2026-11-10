/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicarauj <vicarauj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:54:16 by vicarauj          #+#    #+#             */
/*   Updated: 2026/11/10 15:11:01 by vicarauj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < (n -1) && (s1[i] != '\0' && s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			break;
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int main()
{
	
    printf("%d\n", ft_strncmp("test\200", "test\0", 6));

	return(0);
}*/