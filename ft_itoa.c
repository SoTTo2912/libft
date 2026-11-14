/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicarauj <vicarauj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 09:36:53 by vicarauj          #+#    #+#             */
/*   Updated: 2026/11/12 15:25:45 by vicarauj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_lennum(int n)
{
	int		len;
	long	nb;

	len = 0;
	nb = n;
	if (nb <= 0)
	{
		len++;
		nb = -nb;
	}
	while (nb > 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*s1;
	long	nb;
	long	div;
	int		i;

	nb = n;
	i = (nb < 0);
	if (nb < 0)
		nb = -nb;
	div = 1;
	while (nb / div > 9)
		div *= 10;
	s1 = malloc(ft_lennum(n) + 1);
	if (!s1)
		return (NULL);
	if (i)
		s1[0] = '-';
	while (div)
	{
		s1[i++] = nb / div + '0';
		nb %= div;
		div /= 10;
	}
	s1[i] = '\0';
	return (s1);
}
/*int main(void)
{
	int a = -15124;

	printf("%s\n", ft_itoa(a));
}*/