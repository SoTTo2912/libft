/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicarauj <vicarauj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 13:53:53 by vicarauj          #+#    #+#             */
/*   Updated: 2026/11/03 14:47:35 by vicarauj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)ptr;
	i = 0;
	while (i < num)
	{
		str[i] = (unsigned char)value;
		i++;
	}
	return (ptr);
}

/*int	main(void)
{
	char	a[] = "ola";

	ft_memset(a, 'a', 3);
	
	printf("%s", a);

	return (0);
}*/