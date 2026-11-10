/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicarauj <vicarauj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:21:53 by vicarauj          #+#    #+#             */
/*   Updated: 2026/11/03 15:46:48 by vicarauj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_bzero(void *ptr, size_t num)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		str[i] = '\0';
		i++;
	}
}

/*int	main(void)
{
	char	a[] = "oladasf";

	ft_bzero(a, 6);

	printf("%s", a);

	return (0);
}*/