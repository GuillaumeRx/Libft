/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroux <guroux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 22:33:57 by guroux            #+#    #+#             */
/*   Updated: 2018/11/16 19:31:18 by guroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(int n)
{
	int i;

	i = 1;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while ((n /= 10) != 0)
		i++;
	return (i);
}

char			*ft_itoa(int n)
{
	int		nb;
	int		i;
	char	*s;

	nb = n;
	i = ft_count(n);
	if (!(s = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	s[i] = '\0';
	i--;
	while (i > -1)
	{
		if (nb < 0)
			s[i] = (-(nb % 10) + '0');
		else
			s[i] = (nb % 10 + '0');
		nb /= 10;
		i--;
	}
	if (n < 0)
		s[0] = '-';
	return (s);
}
