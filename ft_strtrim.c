/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guroux <guroux@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 18:28:32 by guroux            #+#    #+#             */
/*   Updated: 2018/11/13 20:45:41 by guroux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(const char *s)
{
	unsigned int	start;
	unsigned int	end;

	end = ft_strlen((char *)s) - 1;
	start = 0;
	if (s[0] == '\0')
		return ((char *)s);
	while ((s[start] == 32 || s[start] == '\n' || s[start] == '\t') && s[start])
		start++;
	while ((s[end] == 32 || s[end] == '\n' || s[end] == '\t')
	&& s[end] && end > start)
		end--;
	return (ft_strsub(s, start, (end - start) + 1));
}
