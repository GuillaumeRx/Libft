/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroux <guroux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 22:33:57 by guroux            #+#    #+#             */
/*   Updated: 2018/11/15 23:10:11 by guroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		i;
	int		sign;
	int		cnt;
	int		nbr;
	char	*s;

	nbr = n;
	i = 0;
	cnt = 0;
	if ((sign = n) < 0)
		n *= -1;
	if (n < 0)
		cnt++;
	while ((nbr /= 10) > 0)
		cnt++;
	if (!(s = (char *)malloc(sizeof(char) * cnt + 1)))
		return (NULL);
	while ((n /= 10) > 0)
		s[i++] = (n % 10) + '0';
	if (sign < 0)
		s[i++] = '-';
	return (s = ft_strrev(s));
}
